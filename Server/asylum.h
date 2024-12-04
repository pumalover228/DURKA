#ifndef ASYLUM_H
#define ASYLUM_H

#include <string>
#include <vector>

struct Patient {
    int id;
    std::string name;
    std::string diagnosis;
    std::string treatment;
};

struct Doctor {
    int id;
    std::string name;
    std::string specialization;
};

class PsychiatryServer {
private:
    std::vector<Patient> patients;
    std::vector<Doctor> doctors;
    int nextPatientId = 1;
    int nextDoctorId = 1;
    const std::string patientFile = "patients.txt";
    const std::string doctorFile = "doctors.txt";

public:

    void loadPatients();
    void loadDoctors();

    void savePatients();
    void saveDoctors();

    PsychiatryServer();
    ~PsychiatryServer();

    int addPatient(const std::string& name, const std::string& diagnosis, const std::string& treatment);
    int removePatient(int id);
    int editPatient(int id, const std::string& newDiagnosis, const std::string& newTreatment);

    int addDoctor(const std::string& name, const std::string& specialization);
    int removeDoctor(int id);

    std::string listPatients() const;
    std::string listDoctors() const;
};

#endif
