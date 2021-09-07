NAME	=	iter
OBJS	=	main.o


FLAGS	=	-std=c++98 -MMD -Wall -Wextra -Werror

CC		=	clang++

%.o:		%.cpp
			$(CC) $(FLAGS) -c $<

all: 		$(NAME)


$(NAME): 	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)


clean:
			rm -rf $(OBJS)
			rm -rf *.d

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
-include $(OBJS:.o=.d)