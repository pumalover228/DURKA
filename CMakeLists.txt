cmake_minimum_required(VERSION 3.00)

enable_testing()

project(DURKA)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(server src/server/main.cpp)
add_executable(client src/client/main.cpp)

add_subdirectory(src/server)
add_subdirectory(src/client)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/src/client/config.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(server PRIVATE server_lib)
target_link_libraries(client PRIVATE client_lib)

add_subdirectory(test)
