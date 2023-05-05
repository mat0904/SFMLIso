/*
** EPITECH PROJECT, 2023
** CSFMIso
** File description:
** get_filesize.c
*/

#include "../../include/prototype.h"

int get_filesize(const char *path)
{
    char *file = malloc(sizeof(char));
    int fd = 0;
    int size = 0;

    file[0] = '\0';
    fd = open(path, O_RDONLY);
    if (fd == -1)
        return -1;
    while (read(fd, file, 1) != 0) {
        size += 1;
        file[0] = '\0';
    }
    close(fd);
    free(file);
    return size;
}
