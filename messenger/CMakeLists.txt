cmake_minimum_required(VERSION 2.8)

add_executable(main main.cpp)
target_link_libraries(main -lglut -lglu32 -lopengl32 view)

add_subdirectory(client)
include_directories(client/View)