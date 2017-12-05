cmake_minimum_required(VERSION 3.9)
project(codeforces)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SOURCE_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")
foreach(SOURCE_FILE ${SOURCE_FILES})
    string(REPLACE ".cpp" "" SOURCE_FILE_NO_EXT ${SOURCE_FILE})
    add_executable(${SOURCE_FILE_NO_EXT} ${SOURCE_FILE})
endforeach()
