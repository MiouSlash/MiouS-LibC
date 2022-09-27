/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** memcpy
*/

#include "../../includes/lib.h"

void my_memcpy(void *dest, void *src, size_t n)
{
    char *ptrsrc = (char *)src;
    char *ptrdest = (char *)dest;

    for (size_t i = 0; i < n; i++)
        ptrdest[i] = ptrsrc[i];
}
