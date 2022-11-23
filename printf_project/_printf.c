#include "main.h"
/**
 * _printf - function to print differently formatted
 * string
 * @format: a format string
 * Return: retrun the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int num_char; /* the number of different chars to print */
	opt type_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
        {NULL, NULL}
	}; /* the different data types */
	va_list valist;

	va_start(valist, format);/* starting the iterating the agruments */

	/* the number of chars that have been printed */
	num_char = parse_string(format, type_list, valist);
	va_end(valist);

	return (num_char);
}