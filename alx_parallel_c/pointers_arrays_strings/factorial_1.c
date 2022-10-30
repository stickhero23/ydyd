#include <stdio.h>
/**
 * @brief 
 * 
 */
int main(void)
{
    int i;

    int res = 1;

    i = 1;
    while (i <= 5)
    {
        res = res * i;
        i++;
    }
    
    printf("The factorial is: %d\n", res);
    return(res);
}