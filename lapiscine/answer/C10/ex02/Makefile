NAME = ft_tail
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes

SRCS = $(SRCDIR)/ft_atoi.c\
	$(SRCDIR)/ft_file_read.c\
	$(SRCDIR)/ft_len.c\
	$(SRCDIR)/ft_strcmp.c\
	$(SRCDIR)/ft_write_error.c\
	$(SRCDIR)/main.c

INCS = $(INCDIR)/ft_file_read.h\
	$(INCDIR)/ft.h\
	$(INCDIR)/ft_write_error.h

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
