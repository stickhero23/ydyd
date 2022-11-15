#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one to be concatenated
 * @s2: string 2 to be concatenated.
 * Return: returns NULL or pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int length1 = 0, length2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		length1++, i++;
	while (s2[j])
		length2++, j++;
	length2++;

	p = malloc(sizeof(char) * (length1 + length2));

	if (p == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < length1)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < length2)
	{
		p[i] = s2[j];
		i++, j++;
	}
	return (p);

}