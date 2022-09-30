/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** my_strcat
*/

#include "../../includes/lib.h"

char *my_strcat(char *dest, char *src)
{
    char *res = NULL;
    int i = 0;
    int len = my_strlen(dest) + my_strlen(src);

    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return NULL;
    for (i = 0; dest[i] != '\0'; i++)
        res[i] = dest[i];
    for (int j = 0; src[j] != '\0'; j++, i++)
        res[i] = src[j];
    res[i] = '\0';
    return res;
}
