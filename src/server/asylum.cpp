#include "asylum.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <algorithm>
#include <string>

PsychiatryServer::PsychiatryServer(){
	loadPatients();
	loadDoctors();
}

PsychiatryServer::~PsychiatryServer() {
	savePatients();
	saveDoctors();
}

int PsychiatryServer::addPatient(const std::string& name, const std::string& diagnosis, const std::string& treatment) {
	patients.push_back({ nextPatientId++, name, diagnosis, treatment });
	savePatients();
	return 1;
}

int PsychiatryServer::removePatient(int id) {
	auto it = std::remove_if(patients.begin(), patients.end(), [id](const Patient& p) {
		return p.id == id;
		});

	if (it != patients.end()) {
		patients.erase(it, patients.end());
		savePatients();
		return 1;
	}
	else return 0;
}

int PsychiatryServer::editPatient(int id, const std::string& newDiagnosis, const std::string& newTreatment) {
	for (auto& patient : patients) {
		if (patient.id == id) {
			patient.diagnosis = newDiagnosis;
			patient.treatment = newTreatment;
			savePatients();
			return 1;
		}
	}
	return 0;
}

int PsychiatryServer::addDoctor(const std::string& name, const std::string& specialization) {
	doctors.push_back({ nextDoctorId++, name, specialization });
	saveDoctors();
	return 1;
}

int PsychiatryServer::removeDoctor(int id) {
	auto it = std::remove_if(doctors.begin(), doctors.end(), [id](const Doctor& d) {
	return d.id == id;
	});

	if (it != doctors.end()) {
		doctors.erase(it, doctors.end());
		saveDoctors();
		return 1;
	}
	else
		return 0;
}

std::string PsychiatryServer::listPatients() const {
	std::string result;
	
	result += "--- List of Patients ---\n";

	for (const auto& patient : patients) {
		result += "[Patient] ID: ";
		result += std::to_string(patient.id);
		result += ", Name: ";
		result += patient.name;
		result += ", Diagnosis: ";
		result += patient.diagnosis;
		result += ", Treatment: ";
		result += patient.treatment;
		result += '\n';
	}
	return result;
}

std::string PsychiatryServer::listDoctors() const {
	std::string result;
	
	result += "--- List of Doctors ---\n";

	for (const auto& doctor : doctors) {
		result += "[Doctor] ID: ";
		result += std::to_string(doctor.id);
		result += ", Name: ";
		result += doctor.name;
		result += ", Specialization: ";
		result += doctor.specialization;
		result += '\n';
	}
	return result;
}

void PsychiatryServer::loadPatients() {
     std::ifstream in(patientFile);
     if (!in)
     {
     		return;
     }
     std::string line;
     while (std::getline(in, line)) {
         std::istringstream iss(line);
         Patient patient;
         iss >> patient.id;
         iss.ignore();
         std::getline(iss, patient.name, ',');
         std::getline(iss, patient.diagnosis, ',');
         std::getline(iss, patient.treatment);
         patients.push_back(patient);
         if (patient.id >= nextPatientId) {
             nextPatientId = patient.id + 1;
         }
     }
     in.close();
 }

void PsychiatryServer::loadDoctors() {
  std::ifstream in(doctorFile);
  if (!in) return;
  std::string line;
  while (std::getline(in, line)) {
      std::istringstream iss(line);
      Doctor doctor;
      iss >> doctor.id;
      iss.ignore();
      std::getline(iss, doctor.name, ',');
      std::getline(iss, doctor.specialization);
      doctors.push_back(doctor);
      if (doctor.id >= nextDoctorId) {
          nextDoctorId = doctor.id + 1;
      }
  }
  in.close();
}

void PsychiatryServer::savePatients() {
  std::ofstream out(patientFile);
  for (const auto& patient : patients) {
      out << patient.id << " " << patient.name << "," << patient.diagnosis << "," << patient.treatment << "\n";
  }
  out.close();
}

void PsychiatryServer::saveDoctors() {
  std::ofstream out(doctorFile);
  for (const auto& doctor : doctors) {
      out << doctor.id << " " << doctor.name << "," << doctor.specialization << "\n";
  }
  out.close();
}
