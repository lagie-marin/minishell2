/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_strcapitalize.c
*/
#include "../../include/my.h"
#include <criterion/criterion.h>

Test ( my_strcapitalize , check_salle_is_Salle )
{
    char str[] = "salle";

    my_strcapitalize(str);
    cr_assert(!my_strcmp(str, "Salle"));
}

Test ( my_strcapitalize , check_mAisON_is_Maison )
{
    char str[] = "mAisON";

    my_strcapitalize(str);
    cr_assert(!my_strcmp(str, "Maison"));
}