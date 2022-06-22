CC		= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= libftprintf.a
SRCS		= ft_printf.c

OBJS		= $(SRCS:.c=.o)
RM		= rm -rf
FLIB		= -rcs
.c.o:
		$(CC) $(CFLAGS) -I . -c $< -o $(<:.c=.o) $@

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)
		ar $(NAME)


clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
