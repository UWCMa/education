cmake_minimum_required(VERSION 2.8)


add_executable(main main.cpp)

#find_path( GLFW3_INCLUDE_DIR GLFW/glfw3.h )
#find_path( GLEW_INCLUDE_DIR GLEW/glew.h )
find_library( GLFW3_LIBRARY glfw3.lib )
find_library( OPENGL32_LIBRARY opengl32.lib )
find_library( GLEW_LIBRARY glew32.lib )
message(${GLFW3_LIBRARY})
message(${OPENGL32_LIBRARY})
message(${GLEW_LIBRARY})

#target_include_directories( main PRIVATE ${GLEW_INCLUDE_DIR})
#target_include_directories( main PRIVATE ${GLFW3_INCLUDE_DIR})

target_link_libraries(main ${GLFW3_LIBRARY} ${OPENGL32_LIBRARY} ${GLEW_LIBRARY} view) #rodo using update submodeles  -lglu32
#target_link_libraries(main ${GLEW_LIBRARY} -lglu32 ${GLFW3_LIBRARY} ${OPENGL32_LIBRARY} view) #rodo using update submodeles  -lglu32
#target_link_libraries(main -lglut -lglu32 -lopengl32 view)

add_subdirectory(client)
include_directories(client/View)
