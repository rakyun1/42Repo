NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -std=c99
AR = ar rcs
SRCS = $(shell ls *.c| grep -v -e ft_strtrim.c -e testP.c)
OBJS = $(SRCS:.c=.o)
HEADER = libft.h

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
