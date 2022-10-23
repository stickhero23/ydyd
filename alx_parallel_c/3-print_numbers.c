#include <stdio.h>

void main(void)
{
    int c = 0;

    while (c < '9' )
    {
        if (c != '2' && c != '4')
        {
            putchar(c);

        }
        c++;
    }
    putchar('\n');

}