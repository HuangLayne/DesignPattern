cmake_minimum_required(VERSION 3.5)
project(test-code)

set(CMAKE_C_EXTENSIONS      ON)
set(CMAKE_C_STANDARD        99)
set(CMAKE_CXX_EXTENSIONS    ON)
set(CMAKE_CXX_STANDARD      11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pedantic")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fomit-frame-pointer -g")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fomit-frame-pointer -s")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fomit-frame-pointer -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fomit-frame-pointer -s")

if (CMAKE_BUILD_TYPE STREQUAL Debug)
    add_definitions(-DDEBUG)
endif()

if(NOT lib_dir)
    set(lib_dir ${CMAKE_SOURCE_DIR}/../libctools)
endif()

if(IS_DIRECTORY ${lib_dir})
    add_subdirectory(${lib_dir} lib.out)
else()
    message(FATAL_ERROR   "INVALID FOLDER 'lib_dir'=${lib_dir}")
endif()

set(lib_name ctools)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${lib_dir}/include)

aux_source_directory(./src src_files)
aux_source_directory(./test test_files)
add_executable(${PROJECT_NAME} ${src_files} ${test_files})
target_link_libraries(${PROJECT_NAME} ${lib_name} pthread)
