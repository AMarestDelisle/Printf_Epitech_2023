##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## By Arthur M-D
##

CC	=	gcc

SRC	=	../my_printf.c	\
		../pointers/pointers.c

FLOAT	=	../float/my_printf_for_float.c	\
		../float/my_put_zero_for_float.c	\
		../float/my_put_float.c

VALUENBR	=	../value_nbr/my_printf_for_int.c \
		../value_nbr/my_put_nbr_unsigned_int.c \
	 	../value_nbr/my_put_nbr.c	\
		../value_nbr/compare_and_put_zero.c

BASE	=	../base/put_octal_unsigned.c	\
		../base/put_hexa.c	\
		../base/my_putnbr_base_long_int.c	\
		../base/put_hexa_caps.c	\
		../base/put_binary.c	\
		../base/my_putnbr_base.c	\
		../base/my_printf_for_base.c

STR	=	../str/length_of_value.c	\
		../str/my_strlen.c	\
		../str/my_putstr.c	\
		../str/my_putchar.c	\
		../str/my_printf_for_char.c

TEST	=	test_my_printf.c

OBJ	=	$(SRC:.c=.o) $(FLOAT:.c=.o) \
		$(VALUENBR:.c=.o) $(BASE:.c=.o) $(STR:.c=.o)

CFLAGS	=	--coverage -Wall -Wextra -I ../includes/

NAME	=	unit_tests

CRITERION	= --coverage -lcriterion

all:	$(NAME)

$(NAME):	$(OBJ) 
	$(CC) $(CFLAGS)  -o $(NAME) $(OBJ) $(CRITERION) $(TEST)

tests_run:	$(NAME)
	./$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
