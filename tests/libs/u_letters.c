/*
** EPITECH PROJECT, 2024
** minishell2
** File description:
** u_letters.c
*/
#include <criterion/criterion.h>
#include "my.h"

Test ( my_isletter_islow, h_is_letter )
{
    char h = 'h';

    cr_assert(my_isletter_islow(h));
}

Test ( my_isletter_islow, nine_is_not_letter )
{
    char h = '9';

    cr_assert(!my_isletter_islow(h));
}

Test ( my_isletter_isupper, h_is_up_letter )
{
    char h = 'H';

    cr_assert(my_isletter_isupper(h));
}

Test ( my_isletter_isupper, nine_is_not_up_letter )
{
    char h = 'h';

    cr_assert(!my_isletter_isupper(h));
}

Test ( my_isletter, H_is_letter )
{
    char h = 'H';

    cr_assert(my_isletter(h));
}

Test ( my_isletter, h_is_letter )
{
    char h = 'h';

    cr_assert(my_isletter(h));
}

Test ( my_isletter, at_is_not_letter )
{
    char h = '@';

    cr_assert(!my_isletter(h));
}

Test ( my_isnum, one_isnum )
{
    char h = '1';

    cr_assert(my_isnum(h));
}

Test ( my_isnum, at_is_not_num )
{
    char h = '@';

    cr_assert(!my_isnum(h));
}

Test ( is_alphanumeric, h_is_alphanum )
{
    char h = 'h';

    cr_assert(is_alphanumeric(h));
}

Test ( is_alphanumeric, at_is_not_alphanum )
{
    char h = '@';

    cr_assert(!is_alphanumeric(h));
}
