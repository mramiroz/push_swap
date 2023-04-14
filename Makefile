CFILES = \
			functions.c push_swap.c \

OBJS = ${CFILES:.c=.o}

CLIBFT = \
			libft_union/libf/ft_atoi.c libft_union/libf/ft_bzero.c libft_union/libf/ft_calloc.c \
			libft_union/libf/ft_isalnum.c libft_union/libf/ft_isalpha.c libft_union/libf/ft_isascii.c \
			libft_union/libf/ft_isdigit.c libft_union/libf/ft_isprint.c libft_union/libf/ft_memchr.c \
			libft_union/libf/ft_memcmp.c libft_union/libf/ft_memcpy.c libft_union/libf/ft_memmove.c \
			libft_union/libf/ft_memset.c libft_union/libf/ft_strchr.c libft_union/libf/ft_strdup.c \
			libft_union/libf/ft_strlcat.c libft_union/libf/ft_strlcpy.c libft_union/libf/ft_strlen.c \
			libft_union/libf/ft_strncmp.c libft_union/libf/ft_strnstr.c libft_union/libf/ft_strrchr.c \
			libft_union/libf/ft_tolower.c libft_union/libf/ft_toupper.c libft_union/libf/ft_substr.c \
			libft_union/libf/ft_strjoin.c libft_union/libf/ft_strtrim.c libft_union/libf/ft_putchar_fd.c \
			libft_union/libf/ft_putstr_fd.c libft_union/libf/ft_putendl_fd.c libft_union/libf/ft_putnbr_fd.c \
			libft_union/libf/ft_itoa.c libft_union/libf/ft_strmapi.c libft_union/libf/ft_striteri.c \
			libft_union/libf/ft_split.c libft_union/libf/ft_lstnew_bonus.c \
			libft_union/libf/ft_lstadd_front_bonus.c libft_union/libf/ft_lstsize_bonus.c \
			libft_union/libf/ft_lstlast_bonus.c libft_union/libf/ft_lstadd_back_bonus.c \
			libft_union/libf/ft_lstdelone_bonus.c libft_union/libf/ft_lstclear_bonus.c \
			libft_union/libf/ft_lstiter_bonus.c libft_union/libf/ft_lstmap_bonus.c \

OLIBFT = ${CLIBFT:.c=.o}


##########################################################################

NAME = push_swap
HDRS = push_swap.h

NLIBRARY= libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OPGRAFIC = -lmlx -framework OpenGL -framework AppKit
FSANITIZE = -fsanitize=adress -g

AR = ar
ARFLAGS = -rcs
RM = rm -f

LIBFT = $(OLIBFT)

##########################################################################

all: ${NAME}

${NAME}: ${NLIBRARY} ${OBJS}
		 @${CC} ${CFLAGS} ${OBJS} ${NLIBRARY} -o $@

$(NLIBRARY): $(LIBFT)
	@$(AR) $(ARFLAGS) $@

clean:
		@${RM} ${OBJS} ${LIBFT}

fclean: clean
		@${RM} ${NLIBRARY} ${NAME}

re: fclean all


.PHONY = all clean fclean re help normi git