cmake_minimum_required(VERSION 3.5.0)

project("imgui")

aux_source_directory(. IMGUI_SRC_LIST)

set(IMGUI_INCLUDE_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}
    CACHE INTERNAL "imgui include dir"
)

add_library(imgui STATIC ${IMGUI_SRC_LIST})

message("cmake types:${CMAKE_CONFIGURATION_TYPES}")

set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/libs/)
