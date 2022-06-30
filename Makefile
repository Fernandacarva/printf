CC			= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= libftprintf.a
SRCS		= ft_printf.c

OBJS		= $(SRCS:.c=.o)
RM			= rm -rf

.c.o:
			$(CC) $(CFLAGS) -I . -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			make -C ./libft
			cp ./libft/libft.a libftprintf.a
			ar rcs $(NAME) $(OBJS)


clean:
			$(RM) $(OBJS)
			make clean -C ./libft

fclean:		clean
			$(RM) $(NAME)
			make fclean -C ./libft

re:			fclean all
			make re -C ./libft

.PHONY:		all clean fclean re
