/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_char_in_str.c
*/
#include <criterion/criterion.h>
#include "../../include/my.h"

Test ( ch_into_str, check_ch_into_str )
{
    char *str = "Bonjour";
    
    cr_assert(ch_into_str(str, 'o'));
}

Test ( ch_into_str, check_ch_not_into_str)
{
    char *str = "Good by";

    cr_assert(!ch_into_str(str, 'a'));
}
