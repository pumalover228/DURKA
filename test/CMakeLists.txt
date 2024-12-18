include(AddCatch2)

add_executable(
  test_client
  test_client.cpp
)

add_executable(
  test_server
  test_server.cpp
)

target_link_libraries(
  test_client PRIVATE client_lib Catch2::Catch2WithMain
)

target_link_libraries(
  test_server PRIVATE server_lib Catch2::Catch2WithMain
)

include(CTest)
include(Catch)
catch_discover_tests(test_client)
catch_discover_tests(test_server)
