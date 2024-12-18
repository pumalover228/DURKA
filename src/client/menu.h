#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

int addPatient(std::string &result, std::string name, std::string diagnosis, std::string treatment);
int removePatient(std::string &result, int id);
int editPatient(std::string &result, int id, std::string diagnosis, std::string treatment);

int addDoctor(std::string &result, std::string name, std::string specialization);
int removeDoctor(std::string &result, int id);

int client_menu(int choice, std::string &result);

#endif
