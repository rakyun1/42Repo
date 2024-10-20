cc = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCDIR = srcs
INCDIR = includes

SRCS = $(SRCDIR)/ft_putchar.c \
	$(SRCDIR)/ft_swap.c \
	$(SRCDIR)/ft_putstr.c \
	$(SRCDIR)/ft_strlen.c \
	$(SRCDIR)/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@
	# $< 의존 파일 :: $@ 타겟 파일
	# 즉 .c 파일로 .o 파일을 생성하라.

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
