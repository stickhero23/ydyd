#include <stdio.h>
#include <stdlib.h>
num_array(unsigned int size, int n);

int num_array(unsigned int size, int n)
{
    int *p;
    int i;

    if (size <= 0)
        return (NULL);
    p = malloc(sizeof(int) * size);

    if (p == NULL)
        return (NULL);
    while (i < (int)size)
    {
        p[i] = n;
        i++;

    }
    p[i] = '\0';

    return (p);
}
