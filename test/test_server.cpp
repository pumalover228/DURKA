#include <catch2/catch_test_macros.hpp>
#include "asylum.h"

TEST_CASE("DBTest - AddPatient", "[Server]"){
	PsychiatryServer db;
	
	REQUIRE(db.addPatient("asdf", "asdgasdg", "asgasgd") == 1);
}
