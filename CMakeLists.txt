project(HelloConan)
cmake_minimum_required(VERSION 2.8.12)
add_definitions("-std=c++14")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories ("${PROJECT_SOURCE_DIR}/Blah")
add_subdirectory (src/Blah)
include_directories ("${PROJECT_SOURCE_DIR}/Counter")
add_subdirectory (src/Counter)

add_executable(helloconan src/main.cpp)
target_link_libraries(helloconan ${CONAN_LIBS} Blah Counter)
