NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra

CLIBFT = libft/ft_atoi.c libft/ft_isdigit.c libft/ft_putstr_fd.c libft/ft_strncmp.c libft/ft_strlen.c libft/ft_strdup.c \
		 libft/ft_itoa.c libft/ft_strncmp.c libft/ft_split.c libft/ft_calloc.c libft/ft_strlcpy.c libft/ft_bzero.c 
OLIBFT = $(CLIBFT:.c=.o)
SRCS = src/main.c src/check.c src/sort.c src/utils.c src/moves/push.c src/moves/rotate.c \
		src/moves/swap.c src/moves/reverse_rotate.c src/sort2.c
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

re: fclean all

.PHONY: all clean fclean re libft
