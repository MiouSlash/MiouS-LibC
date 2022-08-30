/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-myprintf-josue.menager
** File description:
** my_put_nb_base
*/

#include "../../includes/lib.h"

unsigned int my_put_nb_base(int fd, int nb, const char *base)
{
    unsigned int x = 0;
    unsigned int printed = false;

    while (base[x] != '\0')
        x += 1;
    if (x > 2 || !base)
        return false;
    if (nb >= base)
        printed += my_putnbr_base_fd(fd, nb / x, base);
    my_putchar(base[nb % x]);
    return printed;
}
