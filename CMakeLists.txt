cmake_minimum_required(VERSION 3.14)
project(SOFTWARE_DEVELOPMENT_TOOLS_LAB_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ----------- Бібліотека з логікою програми ------------
add_library(core_lib
    functions.cpp
    header.h
)

# ------------ Головна програма -------------------------
add_executable(main_exec main.cpp)
target_link_libraries(main_exec PRIVATE core_lib)

# ------------ GoogleTest (автоматичне завантаження) ---
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# Спеціальна опція для Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# ------------ Юніт-тести -------------------------------
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
