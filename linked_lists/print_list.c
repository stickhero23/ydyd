#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements in list_t
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *n;
	size_t c;

	c = 0;
	n = h;
	while (n != NULL)
	{
        if (n != NULL)
        {
            printf("[0] (nil)");
        }
        else
			printf("[%d] %s\n", n->len, n->str);
        n = n->next;
		c++;
	}
	return (c);
}