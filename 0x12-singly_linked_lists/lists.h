#ifndef LISTS_H
#define LISTS_H

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
size_t print_list(const list_t *h);

#endif /* LISTS_H */
