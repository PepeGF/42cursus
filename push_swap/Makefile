SRCS = main.c verify_input.c manage_input.c \
	   ft_op_s.c ft_op_p.c ft_op_r.c ft_op_rr.c \
	   maxmin.c check_order.c ft_order_3.c order_5.c \
	   range.c radix_sort.c free.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

LIBFT_PATH = ./libft/

CC = gcc

CFLAGS = -g -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(LIBFT_PATH)

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFT_PATH) --silent
	@$(CC) -o $(NAME) $? -I$(LIBFT_PATH) -L$(LIBFT_PATH) -lft
	@echo $(NAME)": ready to be executed"

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_PATH) clean --silent

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) fclean --silent

re: fclean $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) clean --silent

.PHONY: all clean fclean re
