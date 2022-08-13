NAME = libftprintf.a
SRCS = ft_putnbr.c ft_16x.c ft_16xxx.c ftunbr.c ft_printf.c ft_putchar.c ft_putstr.c

HEADER = ft_printf.h
OBJ = 	$(SRCS:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)

.PHONY: all clean fclean re 

all:	 $(NAME)

$(NAME): $(OBJ) $(HEADER) 
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
