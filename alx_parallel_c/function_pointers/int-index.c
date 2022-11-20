#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array
 * @size: the number of elements in the array.
 * @cmp: a pointer to the function for comparison.
 * Return: Returns index of the fiest element or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	i = 0;
    while (i < size)
    {
        if (cmp(*(array + i)))
        {
            return (i);
        }
        i++;
    }
    

	return (-1);
}