/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** concat_params
*/

#include "../../includes/lib.h"

char *concat_params(int argc, char **argv)
{
    char *result = malloc(my_strlen(argv[1]) + 1);
    int total_len = my_strlen(result) + 2;

    for (int i = 0; argv[1][i] != '\0'; i++)
        result[i] = argv[1][i];
    result[total_len] = '\0';
    for (int i = 2; argv[i] != NULL; i++) {
        total_len += my_strlen(argv[i]) + 1;
        result = my_realloc(result, sizeof(result), total_len);
    }
}