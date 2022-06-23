CC			= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= libftprintf.a
SRCS		= ft_printf.c
OBJS		= $(SRCS:.c=.o)
RM			= rm -rf
FLIB		= ar -rcs
.c.o:
			$(CC) $(CFLAGS) -I . -c $< -o $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			cd libft/ && $(MAKE) && cp libft.a ../$(NAME)
			$(FLIB) $(NAME) $(OBJ)


clean:
			$(RM) $(OBJS)
			cd libft/ && $(MAKE) clean

fclean:		clean
			$(RM) $(NAME)
			cd libft/ && $(MAKE) fclean

re:			fclean all

.PHONY:		all clean fclean re
