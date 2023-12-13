NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra

CLIBFT = libft/ft_atoi.c libft/ft_isdigit.c libft/ft_putstr_fd.c libft/ft_strncmp.c libft/ft_strlen.c libft/ft_strdup.c
OLIBFT = $(CLIBFT:.c=.o)
SRCS = main.c check.c sort.c utils.c moves/push.c moves/rotate.c moves/swap.c moves/reverse_rotate.c
OBJS = $(SRCS:.c=.o)
RM = rm -f
AR = ar
ARFLAGS = -rcs

all: $(NAME)

$(NAME): $(OBJS) $(OLIBFT)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

libft:
	make -C libft

clean:
	$(RM) $(OBJS) $(OLIBFT)

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re libft
