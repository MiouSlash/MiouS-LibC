/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** is_alpha
*/

#include "../../includes/lib.h"

bool is_alphanum(const char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    if (c >= 'A' && c <= 'Z')
        return true;
    if (c >= '0' && c <= '9')
        return true;
    return false;
}
