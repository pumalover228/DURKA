project(client)

add_library(client_lib network.cpp menu.cpp)
target_include_directories(client_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
