cmake_minimum_required (VERSION 3.1)
set (CMAKE_CXX_STANDARD 11)
project (CoreUI)

file(GLOB SOURCES
${PROJECT_SOURCE_DIR}/*.h
${PROJECT_SOURCE_DIR}/*.cpp )

add_executable (coreui ${SOURCES})
