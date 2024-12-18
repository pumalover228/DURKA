cmake_minimum_required(VERSION 3.00)

project(server)

add_library(server_lib STATIC network.cpp asylum.cpp menu.cpp)
target_include_directories(server_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
