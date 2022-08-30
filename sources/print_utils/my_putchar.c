/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-myprintf-josue.menager
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
