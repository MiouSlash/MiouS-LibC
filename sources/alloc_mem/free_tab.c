/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** free_tab
*/

#include "../../includes/lib.h"

void free_tab(char **to_free)
{
    for (int i = 0; to_free[i] != NULL; i++)
        free(to_free[i]);
    free(to_free);
}
