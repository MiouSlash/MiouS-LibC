/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** my_realloc
*/

#include "../../includes/lib.h"

void *my_realloc(void *ptr, size_t original_size, size_t next_size)
{
   void *out_ptr = NULL;

    if (next_size <= 0) {
       free(ptr);
       return NULL;
    }
    if (!ptr) {
        return malloc(next_size);
    } else if (next_size <= original_size) {
        return ptr;
    } else {
        out_ptr = malloc(next_size);
        if (out_ptr) {
            my_memcpy(out_ptr, ptr, original_size);
            free(ptr);
        }
    return out_ptr;
    }
}
