project(abstract_factory)
message("abstract_factory @@@@@@@@@@@@@")

add_library(${PROJECT_NAME}_INTERFACE INTERFACE)
add_library(${PROJECT_NAME}::interface ALIAS ${PROJECT_NAME}_INTERFACE)

#target_include_directories(${PROJECT_NAME}_INTERFACE
#  INTERFACE "${CMAKE_CURRENT_LIST_DIR}/include"
#)

add_library(${PROJECT_NAME} STATIC)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})


target_sources(${PROJECT_NAME}
  PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/src/AbstractFactory.cpp"
)

#target_link_libraries(${PROJECT_NAME}
#  PUBLIC
#components::interface
#  PRIVATE
#)

target_include_directories(${PROJECT_NAME}
  PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include"
)