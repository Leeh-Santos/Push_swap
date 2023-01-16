SRCS	= main.c \
					rest/list.c \
					rest/error.c \
					rest/parsing.c \
					rest/checker.c \
					rest/swap.c \
					rest/push.c \
					rest/rotate.c \
					rest/r_rotate.c \
					rest/sort_chill.c \
					rest/radix.c \

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re