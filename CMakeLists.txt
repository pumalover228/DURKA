cmake_minimum_required(VERSION 3.00)

project(DURKA)

enable_testing()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(SERVER_EXE src/server/main.cpp)
set(CLIENT_EXE src/client/main.cpp)	

include_directories(src/server src/client)

add_executable(server ${SERVER_EXE})
add_executable(client ${CLIENT_EXE})

add_subdirectory(src/server)
add_subdirectory(src/client)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/src/client/config.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(server server_lib)
target_link_libraries(client client_lib)

add_subdirectory(test)
