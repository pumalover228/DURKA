cmake_minimum_required(VERSION 3.00)

project(server)

set(SOURCE_LIB network.cpp asylum.cpp menu.cpp)

add_library(server_lib STATIC ${SOURCE_LIB})
