NAME	=	diamondtrap
OBJS	=	main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o


FLAGS	=	-std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow

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