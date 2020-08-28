cmake_minimum_required(VERSION 3.5)

project(libctools-test)

set(CMAKE_C_EXTENSIONS      ON)
set(CMAKE_C_STANDARD        99)
set(CMAKE_CXX_EXTENSIONS    ON)
set(CMAKE_CXX_STANDARD      11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pedantic")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

if (CMAKE_BUILD_TYPE STREQUAL Debug)
    add_definitions(-DDEBUG)
endif()

message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

if(${CMAKE_C_COMPILER_ID} STREQUAL "MSVC")
elseif(${CMAKE_C_COMPILER_ID} MATCHES "^(GNU|.*Clang)$")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror=implicit -fPIC")

    if(${CMAKE_C_COMPILER_ID} STREQUAL "GNU" AND ${CMAKE_C_COMPILER_VERSION} VERSION_GREATER "6.0.0")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wnarrowing -Werror=discarded-qualifiers -Werror=incompatible-pointer-types")
    endif()

    if(${CMAKE_C_COMPILER_ID} STREQUAL "Clang" OR ${CMAKE_C_COMPILER_ID} STREQUAL "AppleClang")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wnarrowing -Werror=ignored-qualifiers -Werror=incompatible-pointer-types")
    endif()

    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fomit-frame-pointer -g")
    set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fomit-frame-pointer -s")

    message(STATUS "gcc/clang cflags ${CMAKE_C_FLAGS}")
    message(STATUS "gcc/clang cflags debug ${CMAKE_C_FLAGS_DEBUG}")
    message(STATUS "gcc/clang cflags release ${CMAKE_C_FLAGS_RELEASE}")
endif()

if(${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
elseif(${CMAKE_CXX_COMPILER_ID} MATCHES "^(GNU|.*Clang)$")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror=implicit -std=gnu++11 -fno-exceptions -fno-rtti -fPIC")

  if(${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU" AND ${CMAKE_CXX_COMPILER_VERSION} VERSION_GREATER "6.0.0")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wnarrowing -Werror=discarded-qualifiers -Werror=incompatible-pointer-types")
  endif()

  if(${CMAKE_CXX_COMPILER_ID} MATCHES ".*Clang$")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wnarrowing -Werror=ignored-qualifiers -Werror=incompatible-pointer-types")
  endif()

  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fomit-frame-pointer -g")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fomit-frame-pointer -s")

  message(STATUS "g++/clang++ cppflags ${CMAKE_CXX_FLAGS}")
  message(STATUS "g++/clang++ cppflags debug ${CMAKE_CXX_FLAGS_DEBUG}")
  message(STATUS "g++/clang++ cppflags release ${CMAKE_CXX_FLAGS_RELEASE}")
  message(STATUS "exe linker flags ${CMAKE_EXE_LINKER_FLAGS}")
endif()

if(NOT lib_dir)
    set(lib_dir ${CMAKE_SOURCE_DIR}/../)
endif()

if(IS_DIRECTORY ${lib_dir})
    add_subdirectory(${lib_dir} lib.out)
else()
    message(FATAL_ERROR   "INVALID FOLDER 'lib_dir'=${lib_dir}")
endif()

set(lib_name ctools)

include_directories(${lib_dir}/include)
include_directories(${lib_dir}/src)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(TEST_SOURCES test_cbuffer.cpp)
add_executable(test_cbuffer ${TEST_SOURCES})
target_link_libraries(test_cbuffer ${lib_name} ${GTEST_BOTH_LIBRARIES})

set(TEST_SOURCES test_memory_leak.cpp)
add_executable(test_memory_leak ${TEST_SOURCES})
target_link_libraries(test_memory_leak ${lib_name} ${GTEST_BOTH_LIBRARIES})

set(TEST_SOURCES test_list.cpp)
add_executable(test_list ${TEST_SOURCES})
target_link_libraries(test_list ${lib_name} ${GTEST_BOTH_LIBRARIES})

set(TEST_SOURCES test_deadlock.cpp)
add_executable(test_deadlock ${TEST_SOURCES})
target_link_libraries(test_deadlock ${lib_name} ${GTEST_BOTH_LIBRARIES})
