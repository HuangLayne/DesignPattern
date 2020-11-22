cmake_minimum_required(VERSION 3.5)
project(29.DataAccessObjectPattern)

FILE(GLOB ALL_FILES "*.h" "*.m")
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${ALL_FILES})
add_executable(${PROJECT_NAME} ${ALL_FILES})
