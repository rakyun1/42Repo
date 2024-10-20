NAME = do-op
CC = cc
CFLAGS = -g -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes

SRCS = $(SRCDIR)/ft_atoi.c \
	$(SRCDIR)/ft_putnbr.c \
	$(SRCDIR)/main.c

INCS = $(INCDIR)/ft.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INCDIR) $(OBJS) -o $(NAME) 

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCS)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
