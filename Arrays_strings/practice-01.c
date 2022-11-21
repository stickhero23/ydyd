#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   
    int sum;
    int i;
    /** int *t = (int *)malloc(sizeof(int) * 3);  using malloc*/
    int *t = (int *)calloc(4, sizeof(int)); /* Using calloc*/
    
    /**
     int *t;
     t = malloc(sizeof(t) * 4);
    t[0] = 18; 
    t[1] = 11; 
    t[2] = 6;  
    t[3] = -5; 
    */

    *t = 18;
    *(t + 1) = 11;
    *(t + 2) = 6;
    *(t + 3) = -5;

    i = 0;
    sum = 0;
    while (i < 4)
    {
        sum += t[i];
        printf("The sum is %i and the address is %p\n", sum, &t[i]); /* To print address of i and the sum*/
        i++;
    }

    printf("The sum is: %d\n", sum);
    free(t);
    printf("The address is: %p\n", &t[i]);

    return (0);
}