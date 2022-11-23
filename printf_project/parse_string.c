#include "main.h"
/**
 * parse_string - parses the string with parameters
 * to print.
 * @format: a string
 * @type_list: contains list of char types
 * @valist: a list of arguments.
 * Return: the number of characters printed.
 */
int parse_string(const char *format, opt type_list[], va_list valist)
{
	int i, j, k, num_char; /* k is the return value */

	num_char = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') /* checks for specifier to show formating */
		{
			for (j = 0; type_list[j].op != NULL; j++)
			{
				if (format[i + 1] == type_list[j].op[0])
				{
					k = type_list[j].func(valist);
					if (k == -1)
						return (-1);
					num_char += k;
					break;
				}
			}
			if (type_list[j].op == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					prnt_char(format[i]);
					prnt_char(format[i + 1]);
					num_char = num_char + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			prnt_char(format[i]);
			num_char++;
		}
	}
	return (num_char);
}