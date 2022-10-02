/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** print_tab_debug
*/

#include "../includes/lib.h"

void print_tab_debug(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr("tab[");
        my_putnbr(i);
        my_putstr("] :");
        my_putstr(tab[i]);
    }
    return;
}
