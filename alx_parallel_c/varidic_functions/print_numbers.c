#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a line.
 * @separator: string printed between numbers.
 * @n: number of integers passed to the function.
 * Return: Always 0, success.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (n > 0)
	{
		va_start(nums, n);
		for (i = 0; i <= n; i++)
		{
			printf("%d", va_arg(nums, int));
			if (i != n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(nums);
	}
	printf("\n");
}