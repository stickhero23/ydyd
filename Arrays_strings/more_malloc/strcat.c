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
	/*while (s1[i])
		length1++, i++;
	while (s2[j])
		length2++, j++;
	length2++; */
	for (i = 0; s1[i] != '\0'; i++)
	{
		length1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		length2++;
	}
	length2++;

	int new_len = length1 + length2;
	p = malloc(sizeof(char) * (new_len));

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