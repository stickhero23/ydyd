#include "lists.h"
/**
 * sum_listint - returns sum of all elements
 * @head: list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
    sum = 0;
	for (; temp != NULL;)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}