/**
 * @file 0-malloc.c
 * @author stickhero23
 * @brief Memory Allocation Exercise
 * @version 0.1
 * @date 2022-11-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * @brief 
 * 
 * @param n0 
 * @param n1 
 * @param n2 
 */
void m(int n0, int n1, int n2)
{
    int *t; 
    int sum;
    int i;
    
    t = malloc(sizeof(*t) * 3);
    t[0] = n0;
    t[1] = n1;
    t[2] = n2;
    sum = 0;
    for (i = 0; i < 3; i++)
    {
        sum += t[i];
        
    }
    
    /* sum = t[0] + t[1] + t[2]; */

    printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
    free(t); /* to free the memory allocation*/
}

/**
 * @brief 
 * 
 * @return int 
 */

int main(void)
{
    m(98, 402, -1024);
    return (0);

}