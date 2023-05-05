/*
** EPITECH PROJECT, 2023
** CSFMIso
** File description:
** manifest.h
*/

#include "include.h"

#ifndef MANIFEST_H_
    #define MANIFEST_H_

    typedef struct object {
        int id;
        sfTexture *texture;
    } sfiso_object_t;

    typedef struct manifest {
        char *path;
        sfiso_object_t **objects;
    } sfiso_manifest_t;

#endif //MANIFEST_H_
