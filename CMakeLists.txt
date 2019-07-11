cmake_minimum_required (VERSION 3.1)
set (CMAKE_CXX_STANDARD 11)
project (CoreUI)

IF(APPLE)

find_library(COCOA_LIBRARY Cocoa)

ENDIF (APPLE)

include_directories(${PROJECT_SOURCE_DIR})

file(GLOB SOURCES
*.h
*.cpp )

add_executable (coreui ${SOURCES})
target_link_libraries(coreui ${COCOA_LIBRARY})
