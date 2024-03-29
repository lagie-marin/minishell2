##
## EPITECH PROJECT, 2024
## B-PSU-200-LYN-2-1-minishell1-marin.lagie
## File description:
## Makefile
##
SRC = ./ch_into_str.c \
	./get_int.c \
	./is_smaller.c \
	./maths/my_compute_power_rec.c \
	./maths/my_compute_square_root.c \
	./maths/my_find_prime_sup.c \
	./maths/my_is_prime.c \
	./maths/power.c \
	./my_intlen.c \
	./my_itoa.c \
	./my_sqrt.c \
	./my_strcapitalize.c \
	./my_strlowcase.c \
	./my_strupcase.c \
	./my_swap.c \
	./my_swap_char.c \
	./my_swap_str.c \
	./puts/my_put_float.c \
	./puts/my_put_nbr.c \
	./puts/my_putchar.c \
	./puts/my_putnbr_base.c \
	./puts/my_putnbr_base_long.c \
	./puts/my_putstr.c \
	./puts/my_show_word_array.c \
	./puts/my_printf.c \
	./search.c \
	./string/array/my_sort_int_array.c \
	./string/array/my_str_to_word_array.c \
	./string/array/str_arraycpy.c \
	./string/array/str_arraydup.c \
	./string/array/str_arraylen.c \
	./string/array/my_strtok.c \
	./string/free/free_strarray.c \
	./string/my_atoi.c \
	./string/my_gcvt.c \
	./string/my_memset.c \
	./string/my_revstr.c \
	./string/my_strcat.c \
	./string/my_strcmp.c \
	./string/my_strcpy.c \
	./string/my_strdup.c \
	./string/my_strlen.c \
	./string/my_strncat.c \
	./string/my_strncmp.c \
	./string/my_strncpy.c \
	./string/my_strstr.c \
	./letters.c \
	./my_isspace.c \
	./str.c \
	./my_str_is_alphanumeric.c \

OBJ = ${SRC:.c=.o}
CFLAGS = -g3 -Wall -Wextra -I../../include
NAME = libmy.a
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${NAME}
re: fclean all
