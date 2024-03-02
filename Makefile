CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRCS = main.c set_param.c parcing.c ft_atoi.c \
		ft_putchar_fd.c ft_putnbr_fd.c instructions_b.c\
		ft_putstr_fd.c ft_split.c instructions_a.c rrr.c\
		ft_strlen.c ft_strjoin.c ft_strcpy.c \
		sorting.c utils.c


OBJECTS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

%.o: %.c push_swap.h  
	$(CC) -g $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

clean:
	$(RM) $(OBJECTS) $(OBJECTS_BONNUS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)
