cmake_minimum_required(VERSION 3.20)

project(my_math)

set(CRITERION_DIR ${CMAKE_SOURCE_DIR}/external/criterion-2.4.2)

add_compile_options(-Wall -Wextra -O2)

add_library(my_math STATIC src/my_math.c)

target_include_directories(my_math PUBLIC ${CMAKE_SOURCE_DIR}/include)

enable_testing()

add_subdirectory(${CMAKE_SOURCE_DIR}/test)
