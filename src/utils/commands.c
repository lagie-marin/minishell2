/*
** EPITECH PROJECT, 2024
** minishell2
** File description:
** commands.c
*/
#include "minishell.h"
#include "my.h"

static commands_t *get_current_cmd(void)
{
    commands_t *current = Shell->commands;

    if (current == NULL)
        return NULL;
    while (current->next != NULL)
        current = current->next;
    return current;
}

void add_command(char *command)
{
    commands_t *commands = malloc(sizeof(commands_t));
    commands_t *current = get_current_cmd();
    char **args = my_str_to_word_array(command);

    commands->args = args;
    commands->path = args[0];
    commands->error = 0;
    commands->next = NULL;
    if (current == NULL)
        Shell->commands = commands;
    else
        get_current_cmd()->next = commands;
}

int rm_all_command(void)
{
    commands_t *commands = Shell->commands;
    commands_t *tmp;

    while (commands != NULL) {
        tmp = commands;
        commands = commands->next;
        free_strarray(tmp->args);
        FREE(tmp);
    }
    Shell->commands = NULL;
    return 1;
}
