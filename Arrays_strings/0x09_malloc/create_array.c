/**
 * @file create_array.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char k)
{
    char *arr;
    int i = 0;
    
    if (size <= 0)
        return (NULL);
    arr = malloc(sizeof(char) * size);

    if (arr == NULL)
        return (NULL);
    while (i < (int)size)
    {
        arr[i] = k;
        i++;

    }
    arr[i] = '\0';

    return (arr);
}