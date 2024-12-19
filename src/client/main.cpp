#include <iostream>
#include <fstream>
#include <string>

#include "network.h"
#include "menu.h"

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
		
		int bad_input = client_menu(choice, result);
		
		if (choice != 0) network::speak_to_server(result);
			
	} while (choice != 0);

	return 0;
}
