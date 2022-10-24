#include <stdio.h>
/**
 * @brief 
 * 
 */
void main(int n)
{
    n = -10;
    if (n > 0)
    {
        while (n > 0)
        {
            putchar(95);
            n--;
        }
    }
    else
    {
        putchar('\n');
    }
    
}