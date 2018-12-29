cmake_minimum_required(VERSION 2.8)

add_executable(main main.cpp)
target_link_libraries(main impl) 
#target_include_directories(helper PUBLIC /impl)
add_subdirectory(impl)