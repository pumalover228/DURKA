cmake_minimum_required(VERSION 3.00)

project(DURKA)

set(SERVER_EXE Server/main.cpp)
set(CLIENT_EXE Client/main.cpp)	

include_directories(Server Client)

add_executable(server ${SERVER_EXE})
add_executable(client ${CLIENT_EXE})

add_subdirectory(Server)
add_subdirectory(Client)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Client/config.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(server server_lib)
target_link_libraries(client client_lib)
