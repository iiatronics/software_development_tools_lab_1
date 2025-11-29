cmake_minimum_required(VERSION 3.14)
project(SOFTWARE_DEVELOPMENT_TOOLS_LAB_1 VERSION 1.0 LANGUAGES CXX) 

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(core_lib
    functions.cpp
)

target_include_directories(core_lib PUBLIC ${CMAKE_SOURCE_DIR})

add_executable(main_exec main.cpp)
target_link_libraries(main_exec PRIVATE core_lib)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "Force shared CRT for GTest" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

add_executable(unit_tests
    test/unit_tests.cpp
)

target_link_libraries(unit_tests
    PRIVATE
    core_lib
    gtest_main
)

target_include_directories(unit_tests PRIVATE ${CMAKE_SOURCE_DIR})

gtest_discover_tests(unit_tests)

add_executable(unit_tests_2
    test/unit_tests_borderline_cases.cpp
)

target_link_libraries(unit_tests_2
    PRIVATE
    core_lib
    gtest_main
)

target_include_directories(unit_tests_2 PRIVATE ${CMAKE_SOURCE_DIR})

gtest_discover_tests(unit_tests_2)