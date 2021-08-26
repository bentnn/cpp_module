cmake_minimum_required(VERSION 3.20)
project(cpp_module)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_module day04/ex03/main.cpp day04/ex03/AMateria.cpp day04/ex03/AMateria.hpp day04/ex03/ICharacter.cpp day04/ex03/ICharacter.hpp day04/ex03/Character.cpp day04/ex03/Character.hpp day04/ex03/Ice.cpp day04/ex03/Ice.hpp day04/ex03/Cure.cpp day04/ex03/Cure.hpp day04/ex03/IMateriaSource.hpp day04/ex03/MateriaSource.cpp day04/ex03/MateriaSource.hpp day05/ex00/Bureaucrat.cpp day05/ex00/Bureaucrat.hpp day05/ex00/main.cpp day05/ex01/Form.cpp day05/ex01/Form.hpp day05/ex02/ShrubberyCreationForm.cpp day05/ex02/ShrubberyCreationForm.hpp day05/ex02/RobotomyRequestForm.cpp day05/ex02/RobotomyRequestForm.hpp day05/ex02/PresidentialPardonForm.cpp day05/ex02/PresidentialPardonForm.hpp day05/ex03/Intern.cpp day05/ex03/Intern.hpp)
