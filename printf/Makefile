NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
AR = ar rcs

SRCS =  libft.c ft_printf.c print_hexadecimal.c 

OBJS = $(SRCS:.c=.o)
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re