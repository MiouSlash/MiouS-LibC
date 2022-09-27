/*
** EPITECH PROJECT, 2022
** calendar
** File description:
** find_str
*/

#include "../../includes/lib.h"

bool find_str(char *to_find, char *to_look)
{
    int count = 0;
    int str1_letter = 0;
    int str_len = 0;

    if (to_find == NULL || to_look == NULL)
        return false;
    str_len = my_strlen(to_find);
    for (int i = 0; to_look[i] != '\0'; i++) {
        if (to_look[i] == to_find[str1_letter]) {
            count += 1;
            str1_letter += 1;
        }
    }
    if (str_len == count)
        return true;
    else
        return false;
}
