/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** my_strcpy
*/

#include "../../includes/lib.h"

char *my_strcpy(char *dest, char const *src)
{
    int src_len = my_strlen(src);

    for (int i = 0; i < src_len; i++) {
        dest[i] = src[i];
        i++;
    }
    dest[src_len] = '\0';
    return dest;
}
