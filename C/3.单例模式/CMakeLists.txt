cmake_minimum_required(VERSION 3.5)
project(test-code LANGUAGES C)

set(CMAKE_C_EXTENSIONS      ON)
set(CMAKE_C_STANDARD        99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pedantic")

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fomit-frame-pointer -g")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fomit-frame-pointer -s")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

aux_source_directory(./src src_files)
aux_source_directory(./test test_files)

add_executable(${PROJECT_NAME} ${src_files} ${test_files})
target_link_libraries(${PROJECT_NAME} pthread)
