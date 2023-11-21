######################################################################
# CMake
######################################################################
cmake_minimum_required(VERSION 3.16)

project(Determine-Primes)

######################################################################
# Folders
######################################################################

# source folders
set(TOP_FOLDER   ${CMAKE_SOURCE_DIR})
set(PROCESS      ${TOP_FOLDER}/code)

# the bin folder
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/lib)

# flags
set(CMAKE_VERBOSE_MAKEFILE OFF)

# compile options
add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-std=c++2a>)

message(
  "\n          CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR}"
  "\n          CMAKE_BINARY_DIR ${CMAKE_BINARY_DIR}"
  "\n  CMAKE_CURRENT_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}"
  "\n    EXECUTABLE_OUTPUT_PATH ${EXECUTABLE_OUTPUT_PATH}"
  "\n       LIBRARY_OUTPUT_PATH ${LIBRARY_OUTPUT_PATH}"
  "\n              PROJECT_NAME ${PROJECT_NAME}"
  "\n          CMAKE_C_COMPILER ${CMAKE_C_COMPILER}"
  "\n        CMAKE_CXX_COMPILER ${CMAKE_CXX_COMPILER}"
  "\n                TOP_FOLDER ${TOP_FOLDER}"
  "\n                   PROCESS ${PROCESS}\n"
)

######################################################################
# Paths to include files
######################################################################
include_directories(
  ${PROCESS}
)

######################################################################
# Process Library
######################################################################
add_library(
  LibProcess STATIC
  ${PROCESS}/src/Process.cpp
  ${PROCESS}/src/Thread.cpp
  ${PROCESS}/src/ThreadFunctions.c
)

######################################################################
# These are the main executables
######################################################################

add_executable(
  Run-Process
    ${PROCESS}/src/main.cpp)

target_link_libraries(
  Run-Process
    LibProcess)

