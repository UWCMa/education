cmake_minimum_required(VERSION 2.8)

set(SMFL_PATH "../../Libs/SFML-2.5.1/")
add_executable(client main.cpp
                      impl/ClientHandler.cpp
                      impl/Window.cpp
                      ../Helper/TraceLogger.cpp)
target_link_libraries(client ${SMFL_PATH}lib/sfml-graphics-s-d
                             ${SMFL_PATH}lib/sfml-window-s-d
                             ${SMFL_PATH}lib/sfml-system-s-d
                             #${SMFL_PATH}lib/sfml-graphics-s
                            # ${SMFL_PATH}lib/sfml-window-s
                             #${SMFL_PATH}lib/sfml-system-s
                             #${SMFL_PATH}lib/sfml-audio-s
                             ${SMFL_PATH}lib/sfml-main
                             ${SMFL_PATH}lib/openal32
                             ${SMFL_PATH}lib/flac
                             ${SMFL_PATH}lib/vorbisenc
                             ${SMFL_PATH}lib/vorbisfile
                             ${SMFL_PATH}lib/vorbis
                             ${SMFL_PATH}lib/ogg
                             ${SMFL_PATH}lib/freetype
                             winmm.lib
                             opengl32.lib
                             gdi32.lib)
include_directories(impl)
include_directories(../Helper)
include_directories( ${SMFL_PATH}include)
include_directories( ${SMFL_PATH}bin)
