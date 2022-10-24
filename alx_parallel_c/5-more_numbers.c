#include <stdio.h>
/**
 * @brief 
 * 
 */
void main(void)
{
    int i;
    int c;

    for (c = 1; c < 10; c++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i / 10 > 10)
                putchar((i % 10) + '0');
            putchar((i % 10) + '0');
        }
    putchar('\n'); 
    }
}