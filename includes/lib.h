/*
** EPITECH PROJECT, 2022
** LIB
** File description:
** lib
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

#ifndef LIB_H_
    #define LIB_H_
    #define NULL ((void *)0)

static void my_putstr_fd(int fd, char *str);
bool find_str(char *to_find, char *to_look);
char *revstr(char *str);
int my_strlen(const char *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_put_nbr_hexa(int nb);
int my_printf(char *format, ...);
int my_put_bin(int nb);
int my_put_octal(int nb);

#endif /* !LIB_H_ */
