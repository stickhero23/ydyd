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

char *str_concat(char *s1, char *s2)
{
	char *p;
	int length1 = 0;
	int length2 = 0; // length of s1
	int j = 0;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i))
	{
		length1++, i++;
	}
	while (*(s2 + j))
	{
		length2++, j++;
	}
	length2++;

	p = malloc(sizeof(char) * (length1 + length2));

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (i < length1)
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	while (j < length2)
	{
		*(p + i) = *(s2 + j);
		i++, j++;
	}
	retun (p);

}