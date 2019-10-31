cmake_minimum_required(VERSION 2.8)

add_executable(server main.cpp 
                      impl/Server.cpp)

include_directories(impl)
