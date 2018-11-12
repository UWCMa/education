cmake_minimum_required(VERSION 2.8)
message("SelfEducation @@@@@@@@@@")
project(SelfEducation)

# Request C++11
set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME})
add_executable(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_sources(${PROJECT_NAME}
  PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/main.cpp")

#find_package(Boost 1.66.0 COMPONENTS system filesystem)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    "${CMAKE_SOURCE_DIR}/education"
) 

add_subdirectory(education)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
    abstract_factory::abstract_factory
)



	

