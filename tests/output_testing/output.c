/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** output
*/

#include "../../includes/lib.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

void test_redirect(void)
{
    write(2, "OK", 3);
}

Test(test_testing_lib, redirect_test, .init=redirect_all_stdout)
{
    test_redirect();
    cr_assert_stderr_eq_str("OK", "");
}