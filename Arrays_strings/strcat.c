#include "main.h"
/**
 * *_strcat - appends the src string to the dest string,
 * @dest: char string
 * @src: char string
 * Return: Always 0, success
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
    
    for (i = 0; dest[i] != 0; i++)
    {
        j++;
    }
    for (i = 0; src[i] != 0; i++)
    {
        dest[j + i] = src[i];
    }

	dest[j + i] = '\0';

	return (0);
}