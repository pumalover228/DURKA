cmake_minimum_required(VERSION 3.00)

project(client)

set(SOURCE_LIB network.cpp)

add_library(client_lib STATIC ${SOURCE_LIB})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/config.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})


