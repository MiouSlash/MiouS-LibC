/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-myprintf-josue.menager
** File description:
** my_put_hexa
*/

void my_putchar(char c);

int my_put_nbr_hexa(int nb)
{
    unsigned int n = nb;

    if (n > 15) {
        my_put_nbr_hexa(nb / 16);
        my_put_nbr_hexa(nb % 16);
    } else if (nb < 0) {
        my_putchar('-');
        nb = -n;
    } else
        my_putchar(nb + '0');
    return (0);
}
