/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** revstr
*/

#include "../../includes/lib.h"

char *revstr(char *str)
{
    int len = my_strlen(str);
    char *res = malloc(sizeof(char) * (len + 1));
    int index = 0;

    if (str == NULL) {
        free(res);
        return NULL;
    }
    for (int i = len - 1; i != -1; i--, index++)
        res[index] = str[i];
    res[index] = '\0';
    return res;
}
