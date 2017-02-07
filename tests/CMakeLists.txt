set(TEST_FILES test_roman.cpp)

add_executable(test_roman ${TEST_FILES})
add_dependencies(test_roman roman)

target_link_libraries(test_roman
    roman
    gtest_main
    gtest
    )

add_test(NAME test_roman_test COMMAND test_roman)
