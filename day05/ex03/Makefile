NAME	=	intern
OBJS	=	main.o Bureaucrat.o Form.o PresidentialPardonForm.o RobotomyRequestForm.o ShrubberyCreationForm.o Intern.o


FLAGS	=	-std=c++98 -Wall -Wextra -Werror

CC		=	clang++

%.o:		%.cpp
			$(CC) $(FLAGS) -c $<

all: 		$(NAME)


$(NAME): 	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)


clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re