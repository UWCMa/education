cmake_minimum_required(VERSION 2.8)

message("View")
add_library(view STATIC ViewHandler.cpp 
								MainWindow.cpp
								Logo.cpp)

target_link_libraries(view common)
add_subdirectory(common)