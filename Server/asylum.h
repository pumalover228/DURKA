#ifndef ASYLUM_H
#define ADD_H

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

    void loadPatients();
    void loadDoctors();

    void savePatients();
    void saveDoctors();

public:
    PsychiatryServer();
    ~PsychiatryServer();

    void addPatient(const std::string& name, const std::string& diagnosis, const std::string& treatment);
    void removePatient(int id);
    void editPatient(int id, const std::string& newDiagnosis, const std::string& newTreatment);

    void addDoctor(const std::string& name, const std::string& specialization);
    void removeDoctor(int id);

    void listPatients() const;
    void listDoctors() const;
};

#endif
