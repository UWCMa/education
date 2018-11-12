set(PATTERNS_DIR ${CMAKE_CURRENT_LIST_DIR})
project(patterns)

add_library(${PROJECT_NAME} INTERFACE)
add_library(${PROJECT_NAME}::interface ALIAS ${PROJECT_NAME})

add_subdirectory(AbstractFactory)

















#add_subdirectory(AbstractFactory/include)

#include_directories(AbstractFactory/include)



#add_library(abstr_factory ${SOURCE_LIB}) 

