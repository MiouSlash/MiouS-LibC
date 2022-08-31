/*
** EPITECH PROJECT, 2022
** LIB
** File description:
** my_strlen
*/

#include "../../includes/lib.h"

int my_strlen(const char *str)
{
    int i = 0;

    if (str == NULL)
        return -1;
    for (i = 0; str[i] !=  '\0'; i++);
    return i;
}
