#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* creating my struct */
typedef struct lists_t
{
    char *c;
    struct lists_t *next;
};



#endif