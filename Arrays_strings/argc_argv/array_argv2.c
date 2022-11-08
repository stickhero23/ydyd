/**
 * @file array_argv2.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
/**
 * @brief 
 * 
 */
int main(int argc, char *argv[])
{
    int i;

    i = 0;
    while (i < argc) /* While i is less than argument count*/
    {
        printf("%s\n", argv[i++]);  /* print the argument name/string*/
    }

    return (0);
    
}
