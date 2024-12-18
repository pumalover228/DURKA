#include "menu.h"
#include "asylum.h"

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string server_menu(string info, PsychiatryServer &db)
{
	istringstream iss(info);
	string s;
	vector<string> svec;

	while (std::getline(iss, s, ' ')) svec.push_back(s);
	
	string result;
	
	switch(stoi(svec[0])){
		case 1: {
            if(db.addPatient(svec[1], svec[2], svec[3]))
            result = "Patient added successfully.";
            break;
        }
        case 2: {
            if(db.removePatient(stoi(svec[1]))) 
            result = "Patient removed successfully.";
            break;
        }
        case 3: {
            if (db.editPatient(stoi(svec[1]), svec[2], svec[3])) result = "Patient updated successfully.";
            else result = "Patient not found.";
            break;
        }
        case 4: {
            if(db.addDoctor(svec[1], svec[2])) result = "Doctor added successfully.";
            break;
        }
        case 5: {
            if(db.removeDoctor(stoi(svec[1]))) result = "Doctor removed successfully.";
            else result = "Doctor not found.";
            break;
        }
        case 6:
            result = db.listPatients();
            break;
        case 7:
            result = db.listDoctors();
            break;
	}
	
	db.savePatients();
	db.saveDoctors();
	
	return result;
}
