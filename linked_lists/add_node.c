#include "lists.h"
#include <string.h>
/**
 * _strlen - find length of string
 * @str: string
 * Return: length of string
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
/**
 * add_node - to insert node at the beginning of list
 * @head: head node of linked list
 * @str: new node to insert
 * Return: Address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;

	return (new_node);
}