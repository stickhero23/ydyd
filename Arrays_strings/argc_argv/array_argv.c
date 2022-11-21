/**
 * @file array_argv.c
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
 * @param argc 
 * @param argv 
 * @return int 
 */
int main( int argc, char *argv[])
{
    int i;
    
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    /* (void) argv; */
    printf("The name of the program is: %s\n", argv[0]);
    printf("The number of arguments is: %d\n", argc);
    return (0);
}