#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
    int *arr;
    int i, n;

    if (min > max)
    {
        return (NULL);
    }
    n = (max - min + 1);
    arr = malloc(sizeof(int) * n);

    if (arr == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (i < n)
    {
        arr[i] = min++;
        i++;
    }

    return (arr);
}