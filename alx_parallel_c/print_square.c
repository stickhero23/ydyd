#include "main.h"
/**
 * @brief Prints a square 
 * 
 */
void print_square(int size)
{
    int length;
    int width;
    if (size > 0)
    {
        width = 0;
        while (width < size)
        {
            length = 0;
            while (length < size)
            {
                _putchar('#');
                length++;
            }
        _putchar('\n');
        width++;
        }
        
    }
    else
    {
    _putchar('\n');
    }
}