cmake_minimum_required (VERSION 2.6)
project (atv-cli)

file(GLOB SOURCES *.cpp)
file(GLOB INCLUDES *.h)

include_directories(.)

add_executable (atv-cli ${SOURCES} ${INCLUDES})
target_link_libraries (atv-cli)
