/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-myprintf-josue.menager
** File description:
** printf
*/

#include "lib.h"

struct stock_s {
    int d;
    va_list ap;
    char c;
    char *s;
    int i;
};

static void check_percents(char *format, int i)
{
    if (format[i - 1] == '%')
        my_putchar(format[i]);
    return;
}

int second_switch(char *format, int i)
{
    switch(format[i]) {
        case '\t': my_putchar('\t'); break;
        case '\n': my_putchar('\n'); break;
        case '%': check_percents(format, i); break;
        default: if (format[i] != '%') {
            while (format[i] != '%') {
                my_putchar(format[i]);
                i++;
            }
            return i;
        }
    }
    return i;
}

int my_printf(char *format, ...)
{
    struct stock_s s;
    int i = 0;

    va_start(s.ap, format);
    while (format[i] != '\0') {
        switch (format[i]) {
            case 'd': s.d = va_arg(s.ap, int); my_put_nbr(s.d); break;
            case 'c': s.c = (char)va_arg(s.ap, int); my_putchar(s.c); break;
            case 's' : s.s = va_arg(s.ap, char *); my_putstr(s.s); break;
            case 'i': s.d = va_arg(s.ap, int); my_put_nbr(s.d); break;
            case 'x': s.d = va_arg(s.ap, int); my_put_nbr_hexa(s.d); break;
            case 'X': s.d = va_arg(s.ap, int); my_put_nbr_hexa(s.d); break;
            case 'b': s.d = va_arg(s.ap, int); my_put_bin(s.d); break;
            case 'o': s.d = va_arg(s.ap, int); my_put_octal(s.d); break;
            default: i = second_switch(format, i);
        }
        i++;
        va_end(s.ap);
    }
    return 0;
}
