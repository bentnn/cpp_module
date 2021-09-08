cmake_minimum_required(VERSION 3.20)
project(cpp_module)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_module day08/ex00/easyfind.hpp day08/ex00/main.cpp day08/ex01/main.cpp day08/ex01/Span.cpp day08/ex01/Span.hpp day08/ex02/main.cpp day08/ex02/MutantStack.cpp day08/ex02/MutantStack.hpp)