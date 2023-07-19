cmake_minimum_required(VERSION 3.5.0)
project(c++_audio VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add_definitions(-w)
include_directories(${IMGUI_INCLUDE_DIR} include)

aux_source_directory(. SRC_LIST)
aux_source_directory(src SRC_LIST)

add_subdirectory(imgui)

add_library(audio_lib STATIC
    src/audio.cpp
    src/audio_recorder.cpp)

add_executable(c++_audio ${SRC_LIST})
target_link_libraries(c++_audio imgui)
