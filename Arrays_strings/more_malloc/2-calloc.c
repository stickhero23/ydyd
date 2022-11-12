#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: elements in array
 * @size: number of bytes
 * Return: returns NULL if nmemb or size is zero,
 * or NULL when malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int j, k;
    unsigned int mem_required;
	unsigned int i;

	j = nmemb;
	k = size;

	if (j <= 0 || k <= 0) /* Validating input*/
		return (NULL);
	/* Allocating memory and error check */
	mem_required = j * k;
	ptr = malloc(mem_required);
	if (ptr == NULL)
		return (NULL);
	/* set allocated memory when ptr is not NULL */
	i = 0;
	while (i < mem_required)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}