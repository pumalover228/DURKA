include(AddCatch2)

add_executable(
  unit_tests
  test_server.cpp
)
target_link_libraries(
  unit_tests PRIVATE server_lib Catch2::Catch2WithMain
)

include(CTest)
include(Catch)
catch_discover_tests(unit_tests)
