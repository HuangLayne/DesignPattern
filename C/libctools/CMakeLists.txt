cmake_minimum_required(VERSION 3.5)
project(ctools LANGUAGES C VERSION 0.0.0)

set(CMAKE_C_EXTENSIONS      ON)
set(CMAKE_C_STANDARD        99)
set(CMAKE_CXX_EXTENSIONS    ON)
set(CMAKE_CXX_STANDARD      11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pedantic")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

if (CMAKE_BUILD_TYPE STREQUAL Debug)
    add_definitions(-DDEBUG)
endif()

# 添加头文件位置
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

# 外部引用的头文件
file(GLOB PUBLIC_HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")

add_library(${PROJECT_NAME} STATIC ${PUBLIC_HEADER_FILES})

add_subdirectory(src)
if(${CMAKE_SYSTEM_NAME} STREQUAL "Android")
    target_link_libraries(${PROJECT_NAME} stdc++ m)
else()
    target_link_libraries(${PROJECT_NAME} stdc++ pthread m)
endif()
