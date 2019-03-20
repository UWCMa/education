cmake_minimum_required(VERSION 2.8)

add_library(impl STATIC TestClassA.cpp)

add_subdirectory(algorithms)
add_subdirectory(stl_practice)