/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-myprintf-josue.menager
** File description:
** my_put_bin
*/

void my_putchar(char c);

int my_put_bin(int nb)
{
    unsigned int n = nb;

    if (n >= 2) {
        my_put_bin(nb / 2);
        my_put_bin(nb % 2);
    } else if (nb < 0) {
        my_putchar('-');
        nb = -n;
    } else
        my_putchar(nb + '0');
    return (0);
}
