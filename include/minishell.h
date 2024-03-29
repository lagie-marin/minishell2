/*
** EPITECH PROJECT, 2024
** B-PSU-200-LYN-2-1-bsminishell1-marin.lagie
** File description:
** minishell.h
*/

#include "my.h"
#include "environement.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <signal.h>

#ifndef MINISHELL_H
    #define MINISHELL_H
    #define _GNU_SOURCE
    #define RE color_manager(0)
    #define BL color_manager(1)
    #define WH color_manager(2)
    #define MINI " ⬼ minishell ⤗ "
    #define ACCESS(str) access(str, F_OK)
    #define IS_EXE(str) access(str, X_OK)
typedef struct commands_s commands_t;
typedef struct shell_s shell_t;
typedef struct vector2f_s v2f;

struct commands_s {
    char **args;
    char *path;
    int error;
    commands_t *next;
};

struct shell_s {
    char **env;
    int len_env;
    commands_t *commands;
    void (*exit)(char *status, char *path, char *error);
};

struct vector2f_s {
    int min;
    int max;
};

extern shell_t *Shell;

void execute(commands_t *cmd);
int compare_type(char *str, char *str1);
int var_exist(char *var);
char *ra_strcat(char *dest, char *src, char *fusion);
char **ra_array(char **array, char *new_line);
int builtin(commands_t *cmd);
void stop(char *status, char *path, char *error);
char *color_manager(int i);
ssize_t my_getline(char **input, size_t *len, FILE *stream);
void add_command(char *command);
int rm_all_command(void);
int error_file(char *path, char *error);
#endif
