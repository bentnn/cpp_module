NAME	=	humans_and_weapons
OBJS	=	main.o HumanA.o HumanB.o Weapon.o


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