/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-minishell1-marin.lagie
** File description:
** my_cd.c
*/
#include "../../include/minishell.h"

static void set_pwd(void)
{
    char *cwd = getcwd(NULL, 0);

    if (cwd == NULL) {
        perror("PWD");
        return;
    }
    my_setenv("PWD", getcwd(NULL, 0));
}

int my_cd(char *path)
{
    if (!my_strcmp(path, "-"))
        path = my_strdup(my_getenv("OLDPWD"));
    if (!path || !my_strcmp(path, "~"))
        path = my_getenv("HOME");
    if (!path)
        exit(84);
    if (my_strcmp(path, ".") && my_strcmp(path, "./"))
        my_setenv("OLDPWD", my_getenv("PWD"));
    if (chdir(path) != 0) {
        perror(path);
        return -1;
    }
    set_pwd();
    return 1;
}
