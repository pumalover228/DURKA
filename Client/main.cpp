#include <iostream>
#include <fstream>
#include <string>

#include "network.h"

using namespace std;

int main()
{
	int choice;
	string result;

	do {
		cout << "\n--- Psychiatry Server ---\n";
		cout << "1. Add Patient\n2. Remove Patient\n3. Edit Patient\n4. Add Doctor\n5. Remove Doctor\n6. List Patients\n7. List Doctors\n0. Exit\n";
		cout << "Choose: ";

		cin >> choice;
		cin.ignore();
		
		switch (choice) {
		case 1: {
			string name, diagnosis, treatment;
			cout << "Enter patient name: ";
			getline(std::cin, name);
			cout << "Enter diagnosis: ";
			getline(std::cin, diagnosis);
			cout << "Enter treatment: ";
			getline(std::cin, treatment);
			
			result += to_string(choice);
			result += ' ';
			result += name;
			result += ' ';
			result += diagnosis;
			result += ' ';
			result += treatment;
			
			network::send_to_server(result);
			break;
			}
		}
	} while (choice != 0);

	return 0;
}
