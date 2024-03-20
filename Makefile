##
## EPITECH PROJECT, 2024
## B-PSU-200-LYN-2-1-minishell1-marin.lagie
## File description:
## Makefile
##
SRC = ./src/main.c \
	./src/built-in/my_env.c \
	./src/built-in/my_kill.c \
	./src/built-in/my_unsetenv.c \
	./src/built-in/my_getenv.c \
	./src/built-in/my_setenv.c \
	./src/built-in/load_env.c \
	./src/built-in/unload_env.c \
	./src/built-in/my_cd.c \
	./src/execute.c \
	./src/utils/ra_strcat.c \
	./src/utils/ra_array.c \
	./src/utils/builtin.c \
	./src/utils/stop.c \
	./src/utils/color_manager.c \
	./src/utils/my_getline.c \

SRC_TEST = ./lib/my/ch_into_str.c \
	./lib/my/get_int.c \
	./lib/my/is_smaller.c \
	./lib/my/maths/my_compute_power_rec.c \
	./lib/my/maths/my_compute_square_root.c \
	./lib/my/maths/my_find_prime_sup.c \
	./lib/my/maths/my_is_prime.c \
	./lib/my/maths/power.c \
	./lib/my/my_intlen.c \
	./lib/my/my_itoa.c \
	./lib/my/my_sqrt.c \
	./lib/my/my_strcapitalize.c \
	./lib/my/my_strlowcase.c \
	./lib/my/my_strupcase.c \
	./lib/my/my_swap.c \
	./lib/my/my_swap_char.c \
	./lib/my/my_swap_str.c \
	./lib/my/puts/my_put_float.c \
	./lib/my/puts/my_put_nbr.c \
	./lib/my/puts/my_putchar.c \
	./lib/my/puts/my_putnbr_base.c \
	./lib/my/puts/my_putnbr_base_long.c \
	./lib/my/puts/my_putstr.c \
	./lib/my/puts/my_show_word_array.c \
	./lib/my/search.c \
	./lib/my/string/array/my_sort_int_array.c \
	./lib/my/string/array/my_str_to_word_array.c \
	./lib/my/string/array/str_arraycpy.c \
	./lib/my/string/array/str_arraydup.c \
	./lib/my/string/array/str_arraylen.c \
	./lib/my/string/free/free_strarray.c \
	./lib/my/string/my_atoi.c \
	./lib/my/string/my_gcvt.c \
	./lib/my/string/my_memset.c \
	./lib/my/string/my_revstr.c \
	./lib/my/string/my_strcat.c \
	./lib/my/string/my_strcmp.c \
	./lib/my/string/my_strcpy.c \
	./lib/my/string/my_strdup.c \
	./lib/my/string/my_strlen.c \
	./lib/my/string/my_strncat.c \
	./lib/my/string/my_strncmp.c \
	./lib/my/string/my_strncpy.c \
	./lib/my/string/my_strstr.c \
	./lib/my/string/my_strtok.c \
	./lib/my/letters.c \
	./lib/my/my_isspace.c \
	./lib/my/str.c \
	./lib/my/my_str_is_alphanumeric.c \
	./tests/libs/u_array_cpy.c \
	./tests/libs/u_char_in_str.c \
	./tests/libs/u_free_strarray.c \
	./tests/libs/u_get_int.c \
	./tests/libs/u_is_smaller.c \
	./tests/libs/u_my_atoi.c \
	./tests/libs/u_my_compute_power_rec.c \
	./tests/libs/u_my_compute_square_root.c \
	./tests/libs/u_my_find_prime_sup.c \
	./tests/libs/u_my_gcvt.c \
	./tests/libs/u_my_intlen.c \
	./tests/libs/u_my_isletter.c \
	./tests/libs/u_my_itoa.c \
	./tests/libs/u_my_memset.c \
	./tests/libs/u_my_put_float.c \
	./tests/libs/u_my_put_nbr.c \
	./tests/libs/u_my_putnbr_base.c \
	./tests/libs/u_my_putnbr_base_long.c \
	./tests/libs/u_my_putstr.c \
	./tests/libs/u_my_revstr.c \
	./tests/libs/u_my_show_word_array.c \
	./tests/libs/u_my_sort_int_array.c \
	./tests/libs/u_my_str_isalpha.c \
	./tests/libs/u_my_str_islow.c \
	./tests/libs/u_my_str_isnum.c \
	./tests/libs/u_my_str_isprintable.c \
	./tests/libs/u_my_str_isupp.c \
	./tests/libs/u_my_strcapitalize.c \
	./tests/libs/u_my_strcat.c \
	./tests/libs/u_my_strcmp.c \
	./tests/libs/u_my_strcpy.c \
	./tests/libs/u_my_strdup.c \
	./tests/libs/u_my_strlen.c \
	./tests/libs/u_my_strlowcase.c \
	./tests/libs/u_my_strncat.c \
	./tests/libs/u_my_strncmp.c \
	./tests/libs/u_my_strncpy.c \
	./tests/libs/u_my_strstr.c \
	./tests/libs/u_my_strtok.c \
	./tests/libs/u_my_strupcase.c \
	./tests/libs/u_search.c \
	./tests/libs/u_str_arraydup.c \
	./tests/libs/u_swap_char.c \
	./tests/libs/u_swap_str.c \
	./tests/libs/u_my_isspace.c \
	./tests/redirect/redirect_all_stdout.c \

OBJ = ${SRC:.c=.o}
CFLAGS = -g3 -Wall -Wextra
NAME = mysh
all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc ${OBJ} -o ${NAME} ./lib/my/libmy.a

clean:
	make -C lib/my/ clean
	rm -f ${OBJ}
	rm -f *.gcda
	rm -f *.gcno
	rm -f unit_tests
fclean: clean
	make -C lib/my/ fclean
	rm -f ${NAME}
	rm -f vgcore.*
tests_run:
	gcc -o unit_tests ${SRC_TEST} --coverage -lcriterion
	./unit_tests
	gcovr --exclude tests/

run: tests_run
re: fclean all
