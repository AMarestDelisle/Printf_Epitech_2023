##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## lukas anne
##

SRC	=	my_printf.c	\
		pointers/pointers.c

FLOAT	=	float/my_printf_for_float.c	\
		float/my_put_zero_for_float.c	\
		float/my_put_float.c

VALUE_NBR	=	value_nbr/my_put_nbr_unsigned_int.c	\
			value_nbr/my_printf_for_int.c	\
			value_nbr/my_put_nbr.c	\
			value_nbr/compare_and_put_zero.c	\

BASE	=	base/put_octal_unsigned.c	\
		base/put_hexa.c	\
		base/my_putnbr_base_long_int.c	\
		base/put_hexa_caps.c	\
		base/put_binary.c	\
		base/my_putnbr_base.c	\
		base/my_printf_for_base.c

STR	=	str/length_of_value.c	\
		str/my_strlen.c	\
		str/my_putstr.c	\
		str/my_putchar.c	\
		str/my_printf_for_char.c

OBJ	=	*.o

CFLAGS	=	-Wall -Wextra -I includes/

NAME	=	libmy.a


all:
	gcc -c $(SRC) $(FLOAT) $(VALUE_NBR) $(BASE) $(STR) $(CFLAGS)
	ar rc $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME) rm -f *gc*

re: fclean all
