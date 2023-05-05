/*
** EPITECH PROJECT, 2023
** CSFMIso
** File description:
** create_manifest.c
*/

#include "../../../include/prototype.h"

sfiso_manifest_t *sfiso_manifest_create(void)
{
    sfiso_manifest_t *manifest = malloc(sizeof(sfiso_manifest_t));

    manifest->path = NULL;
    manifest->objects = NULL;
    return manifest;
}
