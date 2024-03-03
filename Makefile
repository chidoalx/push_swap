CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME_B = checker

BONUS_DIR = bonus

SRCS = main.c set_param.c parcing.c ft_atoi.c \
		ft_putchar_fd.c ft_putnbr_fd.c instructions_b.c\
		ft_putstr_fd.c ft_split.c instructions_a.c rrr.c\
		ft_strlen.c ft_strjoin.c ft_strcpy.c \
		sorting.c utils.c

SRCS_B = $(BONUS_DIR)/main_bonus.c \
	$(BONUS_DIR)/set_param.c \
	$(BONUS_DIR)/parcing.c \
	$(BONUS_DIR)/ft_atoi.c \
	$(BONUS_DIR)/ft_putchar_fd.c \
	$(BONUS_DIR)/ft_putnbr_fd.c \
	$(BONUS_DIR)/instructions_b.c\
	$(BONUS_DIR)/ft_putstr_fd.c \
	$(BONUS_DIR)/ft_split.c \
	$(BONUS_DIR)/instructions_a.c \
	$(BONUS_DIR)/rrr.c\
	$(BONUS_DIR)/ft_strlen.c \
	$(BONUS_DIR)/ft_strjoin.c \
	$(BONUS_DIR)/utils.c \
	$(BONUS_DIR)/get_next_line.c \
	$(BONUS_DIR)/get_next_line_utils.c \
	$(BONUS_DIR)/operation_handle.c \

OBJECTS = $(SRCS:.c=.o)

OBJECTS_B = $(SRCS_B:.c=.o)

RM = rm -f

all: $(NAME)

$(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c $(BONUS_DIR)/push_swap_bonus.h  
	$(CC) -g -fsanitize=address $(CFLAGS) -c -o $@ $<

%.o: %.c push_swap.h  
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

bonus : $(OBJECTS_B)
	$(CC) -g -fsanitize=address $(CFLAGS) $(OBJECTS_B) -o $(NAME_B)

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean:	clean
	$(RM) $(NAME) $(NAME_B)

re:	fclean $(NAME)
