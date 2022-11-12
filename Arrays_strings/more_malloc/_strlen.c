/**
 * @file _strlen.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "main.h"
#include <stdio.h>

int _strlen(char *string);
/**
 * @brief 
 * 
 * @param string 
 * @return int 
 */

int _strlen(char *string)
{
    int i;

    for (i = 0; string[i] != '\0'; i++)
        ;
    return (i);
}
int main()
{
    char *s;
    s = "Holiday";

    _strlen(s);

    return (0);
}
