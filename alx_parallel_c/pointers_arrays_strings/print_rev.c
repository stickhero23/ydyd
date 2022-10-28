#include "main.h"
/**
 * @brief 
 * https://prepinsta.com/c-program/to-print-the-string-in-reverse-order/
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
    {    
	for (i--; i >= 0; i--)
		_putchar(s[i]);
    }
	_putchar('\n');
}