#include <iostream>
#include <string>

#include "menu.h"

using namespace std;

int addPatient(string &result, string name, string diagnosis, string treatment){

	if(name.compare("") == 0 || diagnosis.compare("") == 0 || treatment.compare("") == 0) return 0;
	
	result += name;
	result += ' ';
	result += diagnosis;
	result += ' ';
	result += treatment;
	
	return 1;
}

int removePatient(string &result, int id)
{
	if(id<1) return 0;
	
	result += to_string(id);
	return 1;
}

int editPatient(string &result, int id, string diagnosis, string treatment){

	if(id < 1 || diagnosis.compare("") == 0 || treatment.compare("") == 0) return 0;
	
	result += to_string(id);
	result += ' ';
	result += diagnosis;
	result += ' ';
	result += treatment;
	
	return 1;
}

int addDoctor(string &result, string name, string specialization){

	if(name.compare("") == 0 || specialization.compare("") == 0) return 0;
	
	result += name;
	result += ' ';
	result += specialization;
	
	return 1;
}

int removeDoctor(string &result, int id)
{
	if(id<1) return 0;
	
	result += to_string(id);
	return 1;
}


int client_menu(int choice, string &result)
{
	result += to_string(choice);
	result += ' ';
	
	switch (choice) {
		case 1:	{
			string name, diagnosis, treatment;
			cout << "Enter patient name: ";
			getline(cin, name);
			cout << "Enter diagnosis: ";
			getline(cin, diagnosis);
			cout << "Enter treatment: ";
			getline(cin, treatment);
			
			
			return addPatient(result, name, diagnosis, treatment);	
			break;
		}	
		case 2: {
         int id;
         cout << "Enter patient ID to remove: ";
         cin >> id;
         
         return removePatient(result, id);
         break;
		}
		case 3: {
			int id;
			string newDiagnosis, newTreatment;
			cout << "Enter patient ID to edit: ";
			cin >> id;
			cin.ignore();
			cout << "Enter new diagnosis: ";
			getline(cin, newDiagnosis);
			cout << "Enter new treatment: ";
			getline(cin, newTreatment);
			
			return editPatient(result, id, newDiagnosis, newTreatment);	
			break;
		}
		case 4: {
			string name, specialization;
			cout << "Enter doctor name: ";
			cin.ignore();
			getline(std::cin, name);
			cout << "Enter specialization: ";
			getline(std::cin, specialization);
			
			return addDoctor(result, name, specialization);
			break;
		}
		case 5: {
			int id;
			cout << "Enter doctor ID to remove: ";
			cin >> id;
			
			return removeDoctor(result, id);
			break;
		}
		case 6:
			break;
		case 7:
			break;
		case 0:
			std::cout << "Exiting...\n";
			break;
		default:
			std::cout << "Invalid choice. Please try again.\n";
			return 0;
	}
	return 1;
}
