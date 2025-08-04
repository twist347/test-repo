add_executable(my_math_test main.c)

target_include_directories(my_math_test PRIVATE ${CRITERION_DIR}/include)
target_link_directories(my_math_test PRIVATE ${CRITERION_DIR}/lib)
target_link_libraries(my_math_test PRIVATE my_math criterion)

add_test(NAME my_math_test COMMAND my_math_test)
