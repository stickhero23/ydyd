#include <stdio.h>
#include "main.h"
/**
 * @brief It implements similar to isupper standard library
 * @c: integer type number
 */
int main(int c) 
/*int _isupper(int c) */
{
    printf("Enter Your letter c: %d\n", c);
    c = getchar();

    if (c >= 'a' && c <= 'z')
    {
        
        printf("%c: %d\n", c, 0);
        return (0);
    }
    c = 'A';

    if (c >= 'A' && c <= 'Z')
    {
        printf("%c: %d\n", c, 1);
        return (1);
    }
    /*return (c);*/
    
}