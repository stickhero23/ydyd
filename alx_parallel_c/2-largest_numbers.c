#include "main.h"
#include <stdio.h>
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main(int a, int b, int c)
//int largest_number(int a, int b, int c)
{   
    a = -72;
    b = 98;
    c = 1090;
    int largest;

    if (a > b && a > c)
    {
        largest = a;
        printf("%i is the largest number.", a);
    }
    else if (b > a && b > c)
    {
        largest = b;
        printf("%i is the largest number.", b);
    }
    else if (c > a && c > b)
    {
        largest = c;
        printf("%i is the largest number.", c);
    }

    return (largest);
}