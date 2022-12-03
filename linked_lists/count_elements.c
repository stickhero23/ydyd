#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	const list_t *n;
	size_t c;

	c = 0;
	n = h;
    
    for (; n != NULL;)
    {
        n = n->next;
        c++;
    }

	return (c);
}