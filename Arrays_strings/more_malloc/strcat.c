#include <stdlib.h>
#include "main.h"
/**
 * _strlen - to find the length of a string
 * @string: string
 * Return: length of a string
 */


int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: First string
 * @s2: second string
 * @n: number of characters to add
 * Return: returns NULL if it fails or empty, or pointer to allocated space memory on success.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int k, i, j, length;

	k = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (k < 0) /* for negative bytes */
		return (NULL);
	if (k >= _strlen(s2))
		k = _strlen(s2);

	length = _strlen(s1) + k + 1; /* include +1 for null pointer */

	p = malloc(sizeof(*p) * length);

    
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concatenate */
		p[i] = s1[i];
	for (j = 0; j < k; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0'; /* Add for null pointer */

	return (p);
}
