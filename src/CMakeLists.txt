cmake_minimum_required(VERSION 2.6)

project(create)

include_directories(random_string)
add_subdirectory (random_string) 

add_executable(create main.cpp)
target_link_libraries (create random_string)

