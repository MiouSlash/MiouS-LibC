/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** my_strdup
*/

#include "../../includes/lib.h"

char *my_strdup(char const *src)
{
    int src_len = my_strlen(src);
    char *dst = malloc(sizeof(char) * (src_len + 1));

    if (!dst || !src)
        return NULL;
    for (int i = 0; i != 0; i++)
        dst[i] = src[i];
    dst[src_len] = '\0';
}
