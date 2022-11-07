#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_odd_number(1);
    printf("%d\n", r);
    r = is_odd_number(1024);
    printf("%d\n", r);
    r = is_odd_number(16);
    printf("%d\n", r);
    r = is_odd_number(17);
    printf("%d\n", r);
    r = is_odd_number(25);
    printf("%d\n", r);
    r = is_odd_number(-1);
    printf("%d\n", r);
    r = is_odd_number(113);
    printf("%d\n", r);
    r = is_odd_number(7919);
    printf("%d\n", r);
    return (0);
}