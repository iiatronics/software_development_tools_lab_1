cmake_minimum_required(VERSION 3.14)
project(SOFTWARE_DEVELOPMENT_TOOLS_LAB_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(core_lib
    functions.cpp
    header.h
)


add_executable(main_exec main.cpp)
target_link_libraries(main_exec PRIVATE core_lib)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)


enable_testing()

add_executable(unit_tests
    test/unit_tests.cpp
)

target_link_libraries(unit_tests
    PRIVATE
        core_lib
        gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)
