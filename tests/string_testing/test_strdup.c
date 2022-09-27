/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** assert_str
*/

#include <criterion/criterion.h>
#include "../../includes/lib.h"

Test(test_strdup, test_with_NULL)
{
    char *str = NULL;
    str = my_strdup(NULL);
    cr_assert_str_eq(str, NULL);
}