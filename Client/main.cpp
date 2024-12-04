#include <iostream>
#include <fstream>
#include <string>

#include "network.h"

using namespace std;

int main()
{
	int choice;
	

	do {
		string result = "";
		cout << "\n--- Psychiatry Server ---\n";
		cout << "1. Add Patient\n2. Remove Patient\n3. Edit Patient\n4. Add Doctor\n5. Remove Doctor\n6. List Patients\n7. List Doctors\n0. Exit\n";
		cout << "Choose: ";

		cin >> choice;
		cin.ignore();
		
		result += to_string(choice);
		result += ' ';
		

		switch (choice) {
		case 1: {
			string name, diagnosis, treatment;
			cout << "Enter patient name: ";
			getline(cin, name);
			cout << "Enter diagnosis: ";
			getline(cin, diagnosis);
			cout << "Enter treatment: ";
			getline(cin, treatment);
			
			result += name;
			result += ' ';
			result += diagnosis;
			result += ' ';
			result += treatment;
			
			break;
			}
		case 2: {
         int id;
         cout << "Enter patient ID to remove: ";
         cin >> id;
         
         result += to_string(id);
         
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
			
			result += to_string(id);
			result += ' ';
			result += newDiagnosis;
			result += ' ';
			result += newTreatment;
			
			break;
		}
		case 4: {
			string name, specialization;
			cout << "Enter doctor name: ";
			cin.ignore();
			getline(std::cin, name);
			cout << "Enter specialization: ";
			getline(std::cin, specialization);
			
			result += name;
			result += ' ';
			result += specialization;
			
			break;
		}
		case 5: {
			int id;
			cout << "Enter doctor ID to remove: ";
			cin >> id;
			
			result += to_string(id);
			
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
			continue;
	}
		
	if (choice != 0) network::send_to_server(result);
	
	} while (choice != 0);

	return 0;
}
