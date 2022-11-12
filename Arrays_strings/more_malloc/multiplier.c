#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int main()
{

}
/**
 * @brief Multiplie function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int multiplier(int argc, char *argv[])
{
    int i, mul, num1, num2, n;
    int *p;

    n = argc - 1;

    if (n != 2)
    {
        _putchar("Error");
        _putchar('\n');
        exit(98);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    if (_isdigit(num1) && _isdigit(num2))
    {
        _putchar("Error\n");
        _putchar('\n');
        exit(98);
    }
    else
    {
        mul = num1 * num2;
        _putchar(mul);
        _putchar('\n');
    }
    

}
// isdigit 
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
    
}
// puts
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}

// putchar
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
