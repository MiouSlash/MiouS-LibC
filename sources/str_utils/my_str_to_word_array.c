/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** my_str_to_word_array
*/

#include "../../includes/lib.h"

int count_slots(char const *str)
{
    int count = 0;

    if (!str)
        return -1;
    for (int i = 0; str[i] != 0; i++) {
        if (is_alphanum(str[i]) == false)
            count += 1;
    }
    return count + 1;
}

char **my_str_to_word_array(const char *str)
{
    int s = count_slots(str);
    char **words = (s != -1) ? malloc(sizeof(char *) * s) : NULL;
    int str_index = 0;

    if (!words || s == -1)
        return NULL;
    for (int i = 0; i != s - 1; i++) {
        
    }
    return words;
}