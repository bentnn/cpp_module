cmake_minimum_required(VERSION 3.20)
project(cpp_module)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_module day_00/ex00/megaphone.cpp day_00/ex01/Contact.cpp day_00/ex01/Contact.hpp day_00/ex01/PhoneBook.cpp day_00/ex01/PhoneBook.hpp day_00/ex01/main.cpp day_00/ex02/Account.cpp day_00/ex02/Account.hpp day_00/ex02/tests.cpp)
