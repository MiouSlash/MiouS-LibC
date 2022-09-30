/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** my_show_word_array
*/

#include "../../includes/lib.h"

int my_show_word_array(char *const *tab)
{
    if (!tab)
        return -1;
    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
