/*
** EPITECH PROJECT, 2024
** minishell2
** File description:
** segfault.c
*/
#include "minishell.h"

void segfault(int status, char **paths)
{
    char str[my_intlen(status) + 1];

    my_itoa(status, str);
    free_strarray(paths);
    if (WIFSIGNALED(status)) {
        if (WTERMSIG(status) == SIGFPE)
            Shell->exit(str, "", FLOAT_EXEP);
        if ((WTERMSIG(status) == SIGSEGV && !WCOREDUMP(status)) ||
            WCOREDUMP(status)) {
            Shell->exit(str, "", SEGFAULT);
        }
    }
}
