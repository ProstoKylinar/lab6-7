cmake_minimum_required(VERSION 3.16)
project(test)

set(CMAKE_CXX_STANDARD 11)
enable_testing()
set(header class.hpp)
set(source class.cpp main.cpp)
set(This googletest)
add_library(class.hpp STATIC ${header} ${source})
add_executable(${This} ${source})
target_link_libraries(${This} PUBLIC
        gtest
        pthread
        class.hpp)



