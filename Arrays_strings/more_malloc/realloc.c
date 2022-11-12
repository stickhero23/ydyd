#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: the size in byted of the allocated space
 * for ptr.
 * @new_size: the size in bytes for new memory block.
 * Return: returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL) /* Checking for malloc fail*/
		{
			return (NULL);
		}
		else
			return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < old_size && i < new_size)
	{
		*((char *)p + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);

	return (p);
}

