cmake_minimum_required(VERSION 2.8)

add_executable(main main.cpp)
target_link_libraries(main impl algorithms stl_practice -lglut -lglu32 -lopengl32) 
#target_link_libraries(main impl algorithms stl_practice -lglut -lglu32 -lopengl32) 
add_subdirectory(impl)
include_directories(impl)