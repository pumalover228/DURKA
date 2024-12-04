#include "asylum.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <algorithm>


PsychiatryServer::PsychiatryServer(){
	loadPatients();
	loadDoctors();
}

PsychiatryServer::~PsychiatryServer() {
	savePatients();
	saveDoctors();
}

void PsychiatryServer::addPatient(const std::string& name, const std::string& diagnosis, const std::string& treatment) {
	patients.push_back({ nextPatientId++, name, diagnosis, treatment });
	savePatients();
	std::cout << "Patient added successfully.\n";
}

void PsychiatryServer::removePatient(int id) {
	auto it = std::remove_if(patients.begin(), patients.end(), [id](const Patient& p) {
		return p.id == id;
		});

	if (it != patients.end()) {
		patients.erase(it, patients.end());
		savePatients();
		std::cout << "Patient removed successfully.\n";
	}
	else std::cout << "Patient not found.\n";
}

void PsychiatryServer::editPatient(int id, const std::string& newDiagnosis, const std::string& newTreatment) {
	for (auto& patient : patients) {
		if (patient.id == id) {
			patient.diagnosis = newDiagnosis;
			patient.treatment = newTreatment;
			savePatients();
			std::cout << "Patient updated successfully.\n";
			return;
		}
	}
	std::cout << "Patient not found.\n";
}

void PsychiatryServer::addDoctor(const std::string& name, const std::string& specialization) {
	doctors.push_back({ nextDoctorId++, name, specialization });
	saveDoctors();
	std::cout << "Doctor added successfully.\n";
}

void PsychiatryServer::removeDoctor(int id) {
	auto it = std::remove_if(doctors.begin(), doctors.end(), [id](const Doctor& d) {
	return d.id == id;
	});

	if (it != doctors.end()) {
		doctors.erase(it, doctors.end());
		saveDoctors();
		std::cout << "Doctor removed successfully.\n";
	}
	else
		std::cout << "Doctor not found.\n";
}

void PsychiatryServer::listPatients() const {
	std::cout << "--- List of Patients ---\n";
	for (const auto& patient : patients) {
		std::cout << "[Patient] ID: " << patient.id << ", Name: " << patient.name
		<< ", Diagnosis: " << patient.diagnosis << ", Treatment: " << patient.treatment << '\n';
	}
}

void PsychiatryServer::listDoctors() const {
	std::cout << "--- List of Doctors ---\n";
	for (const auto& doctor : doctors) {
		std::cout << "[Doctor] ID: " << doctor.id << ", Name: " << doctor.name
		<< ", Specialization: " << doctor.specialization << '\n';
	}
}

void PsychiatryServer::loadPatients() {
     std::ifstream in(patientFile);
     if (!in) return;
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
