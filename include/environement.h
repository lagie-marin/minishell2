/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-bsminishell1-marin.lagie
** File description:
** environement.h
*/
#ifndef ENVIRONEMENT_H
    #define ENVIRONEMENT_H
    #define NOT_FOUND ": Command not found.\n"
    #define VAR_NAME_LETTER ": Variable name must begin with a letter.\n"
    #define VAR_NAME_CH ": Variable name must contain alphanumeric characters."
    #define FLOAT_EXEP ": Floating exception (core dumped)\n"
    #define SEGFAULT "Segmentation fault\n"
    #define PERM_DENIED ": Permission denied.\n"
int my_env(void);
void load_env(char **env);
int my_unsetenv(char **args);
void my_kill(char *status, char **args);
char *my_getenv(char *type);
int my_setenv(char *var, char *content);
int my_cd(char *path);
int unload_env(void);
#endif
