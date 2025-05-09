cmake_minimum_required(VERSION 3.10)
project(tests)

enable_testing()

add_subdirectory(${CMAKE_SOURCE_DIR}/path/to/googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(test_1-1-alignMoney test_1-1-alignMoney.cpp)
target_link_libraries(test_1-1-alignMoney gtest gtest_main)

add_test(NAME test_1-1-alignMoney COMMAND test_1-1-alignMoney)