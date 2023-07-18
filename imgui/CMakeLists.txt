cmake_minimum_required(VERSION 3.5.0)

aux_source_directory(. IMGUI_SRC_LIST)

set(IMGUI_INCLUDE_DIR 
    ${CMAKE_CURRENT_SOURCE_DIR} 
    CACHE INTERNAL "imgui include dir"
)

message(STATUS "imgui头文件路径 :${IMGUI_INCLUDE_DIR}")

add_library(imgui ${IMGUI_SRC_LIST})

# add_subdirectory(subsubfunc)