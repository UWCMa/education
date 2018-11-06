cmake_minimum_required(VERSION 2.8)

project(SelfEducation)

add_subdirectory(education/Patterns/)
set(SOURCE_FACTORY education/Patterns/AbstractFactory/src/AbstractFactory.cpp)
set(SOURCE_LIST main.cpp ${SOURCE_FACTORY})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

include_directories (education/common 
					education/Patterns/AbstractFactory/include/)

add_executable(bin/main ${SOURCE_LIST})



#--------->Patterns<---------
#add_subdirectory(${PATTERNS})

	

