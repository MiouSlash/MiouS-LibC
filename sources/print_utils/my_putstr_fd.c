/*
** EPITECH PROJECT, 2022
** LIB
** File description:
** my_putstr_fd
*/

#include <unistd.h>

static void my_putstr_fd(int fd, char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(fd, str[i], 1);
    return;
}
