/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** lib
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
char *my_strdup(char const *src);
void my_memcpy(void *dest, void *src, size_t n);
void *my_realloc(void *ptr, size_t originalLength, size_t newLength);
void free_tab(char **to_free);
char *my_strcat(char *dest, char *src);
int my_strcmp(char *s1, char *s2);
char *my_strcpy(char *dest, char const *src);
int my_show_word_array(char *const *tab);
bool is_alphanum(const char c);

#endif /* !LIB_H_ */
