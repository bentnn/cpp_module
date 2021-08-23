cmake_minimum_required(VERSION 3.20)
project(cpp_module)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_module day04/ex03/main.cpp day04/ex03/AMateria.cpp day04/ex03/AMateria.hpp day04/ex03/ICharacter.cpp day04/ex03/ICharacter.hpp day04/ex03/Character.cpp day04/ex03/Character.hpp day04/ex03/Ice.cpp day04/ex03/Ice.hpp day04/ex03/Cure.cpp day04/ex03/Cure.hpp day04/ex03/IMateriaSource.hpp day04/ex03/MateriaSource.cpp day04/ex03/MateriaSource.hpp)
