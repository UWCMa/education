cmake_minimum_required(VERSION 2.8)

message("common")
add_library(common STATIC  BaseView.cpp
									timeserver.cpp)
