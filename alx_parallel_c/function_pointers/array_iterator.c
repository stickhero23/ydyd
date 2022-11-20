#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function as a parameter
 * @array: array
 * @size: is the size of the array
 * @action: a pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}