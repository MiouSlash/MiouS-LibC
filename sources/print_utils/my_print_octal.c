/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-myprintf-josue.menager
** File description:
** my_print_octal
*/

void my_putchar(char c);

int my_put_octal(int nb)
{
    unsigned int n = nb;

    if (n > 7) {
        my_put_octal(nb / 8);
        my_put_octal(nb % 8);
    } else if (nb < 0) {
        my_putchar('-');
        nb = -n;
    } else
        my_putchar(nb + '0');
    return (0);
}
