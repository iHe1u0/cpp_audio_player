cmake_minimum_required(VERSION 3.5.0)
project(c++_audio VERSION 0.1.0 LANGUAGES C CXX)

add_definitions(-w)

include(CTest)
enable_testing()

include_directories(include)

add_library(audio_lib STATIC src/audio.cpp)

add_executable(c++_audio main.cpp)

target_link_libraries(c++_audio audio_lib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
