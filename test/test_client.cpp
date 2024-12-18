#include <catch2/catch_test_macros.hpp>
#include "menu.h"
#include <string>

TEST_CASE("DBTest - AddPatient", "[Client]"){
	std::string temp;
	
	REQUIRE(addPatient(temp, "asfdas", "sadfaf", "asdfadsfs") == 1);
	REQUIRE(addPatient(temp, "", "sadfaf", "asdfadsfs") == 0);
	REQUIRE(addPatient(temp, "asfdas", "", "asdfadsfs") == 0);
	REQUIRE(addPatient(temp, "asfdas", "sadfaf", "") == 0);
}

TEST_CASE("DBTest - RmPatient", "[Client]"){
	std::string temp;
	
	REQUIRE(removePatient(temp, 1) == 1);
	REQUIRE(removePatient(temp, 0) == 0);
	REQUIRE(removePatient(temp, -1) == 0);
}

TEST_CASE("DBTest - EditPatient", "[Client]"){
	std::string temp;
	
	REQUIRE(editPatient(temp, 1, "sadfaf", "asdfadsfs") == 1);
	REQUIRE(editPatient(temp, 1, "sadfaf", "") == 0);
	REQUIRE(editPatient(temp, 1, "", "asdfadsfs") == 0);
	REQUIRE(editPatient(temp, 0, "sadfaf", "asdfadsfs") == 0);
	REQUIRE(editPatient(temp, -1, "sadfaf", "asdfadsfs") == 0);
}

TEST_CASE("DBTest - AddDoctor", "[Client]"){
	std::string temp;
	
	REQUIRE(addDoctor(temp, "asfdas", "sadfaf") == 1);
	REQUIRE(addDoctor(temp, "", "sadfaf") == 0);
	REQUIRE(addDoctor(temp, "asfdas", "") == 0);
}

TEST_CASE("DBTest - RmDoctor", "[Client]"){
	std::string temp;
	
	REQUIRE(removeDoctor(temp, 1) == 1);
	REQUIRE(removeDoctor(temp, 0) == 0);
	REQUIRE(removeDoctor(temp, -1) == 0);
}

