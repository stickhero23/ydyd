#include "main.h"
#include <stdio.h>
/**
 * @brief 
 * 
 */
void print_line(int n)
{

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        while (n > 0)
        {
            _putchar(95);
            n--;
        }
        _putchar('\n');
    }
    
}