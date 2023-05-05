/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-mael.rabot
** File description:
** split.c
*/

#include "../../include/prototype.h"

static int detect_start(int start, char *token, char separator)
{
    int i = start;

    while (token[i] == separator) {
        if (token[i] == '\0')
            return -1;
        i += 1;
    }
    return i;
}

static int detect_end(char *token, char separator)
{
    int i = 0;

    while (token[i] != separator) {
        if (token[i] == '\0') {
            return -1;
        }
        i += 1;
    }
    token[i] = '\0';
    return i;
}

static int put_end_token(char **array, char *token, int j, int *index)
{
    if (j == -1) {
        array[*index] = token;
        *index += 1;
        return -1;
    }
    return 0;
}

char **split(char *arg, char separator)
{
    char **array = malloc(sizeof(char *) * my_strlen(arg));
    int index = 0;
    int i = 0;
    int j = 0;
    char *token = NULL;

    while (arg[i] != '\0') {
        i = detect_start(i, arg, separator);
        if (i == -1)
            break;
        token = my_strdup(&arg[i]);
        j = detect_end(token, separator);
        if (put_end_token(array, token, j, &index) == -1)
            break;
        i += j;
        array[index] = token;
        index += 1;
    }
    array[index] = NULL;
    return array;
}
