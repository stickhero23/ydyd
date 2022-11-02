#include "main.h"
/**
 * @brief 
 * 
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;
	if (size > 0)
	{
		int i;
		for (i = 0; i < size; i++)
		     *(s + i) = b;
			/* s[i] = b; version 2*/
	}
	return (s);
}
