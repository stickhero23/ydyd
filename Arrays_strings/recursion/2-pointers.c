#include "stdio.h"

int main(void)
{
    int n;             /* an int variable */
    int *p;             /* a pointer to an int */
    int *q;             /* another pointer to an int */

    p = &n;             /* p now points to n */
    n = 98;
    q = p;              /* q now points to n as well */
    printf("The memory address of n is: %p\n", &n);
    printf("The value of n is: %d\n", n);
    printf("The memory address of p is: %p\n", &p);
    printf("The value of p is: %d\n", &p);
    printf("The memory address of q is: %p\n", &q);
    printf("The value of q is: %d\n", q);

    return (0);
}