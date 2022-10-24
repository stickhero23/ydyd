#include <stdio.h>
/**
 * @brief 
 * 
 */
void main(int c)
{
    int c_multiple;
    c = 1;
    while (c <= 100)
    {
        if (c % 3 == 0 && c % 5 == 0)
        {
            printf("FizzBuzz");
            printf(" ");
        }
        else if (c % 3 == 0)
        {
            printf("Fizz");
            printf(" ");  
        }
        else if (c % 5 == 0)
        {
            printf("Buzz");
            printf(" ");
        }
        else
        {
            printf("%d",c);
            printf(" ");
        }
    c++;
    }
printf("\n");
}