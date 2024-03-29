/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** u_my_putnbr_base.c
*/
#include <criterion/criterion.h>
#include "crit.h"
#include "my.h"

Test (my_putnbr_base, nbr_16516512_base_2, .init=redirect_all_stdout)
{
    int nbr = 16516512;
    char base[] = "01";

    my_putnbr_base(nbr, base);
    cr_assert_stdout_eq_str("111111000000010110100000", "");
}

Test (my_putnbr_base, nbr_n1556453_base_2, .init=redirect_all_stdout)
{
    int nbr = -1556453;
    char base[] = "01";

    my_putnbr_base(nbr, base);
    cr_assert_stdout_eq_str("-101111011111111100101", "");
}

Test (my_putnbr_base, nbr_44248_base_10, .init=redirect_all_stdout)
{
    int nbr = 44248;
    char base[] = "0123456789";

    my_putnbr_base(nbr, base);
    cr_assert_stdout_eq_str("44248", "");
}

Test (my_putnbr_base, nbr_n11533_base_10, .init=redirect_all_stdout)
{
    int nbr = -11533;
    char base[] = "0123456789";

    my_putnbr_base(nbr, base);
    cr_assert_stdout_eq_str("-11533", "");
}

Test (my_putnbr_base, nbr_14616_base_16, .init=redirect_all_stdout)
{
    int nbr = 14616;
    char base[] = "0123456789ABCDEF";

    my_putnbr_base(nbr, base);
    cr_assert_stdout_eq_str("3918", "");
}

Test (my_putnbr_base, nbr_n16583_base_16, .init=redirect_all_stdout)
{
    int nbr = -16583;
    char base[] = "0123456789ABCDEF";

    my_putnbr_base(nbr, base);
    cr_assert_stdout_eq_str("-40C7", "");
}

