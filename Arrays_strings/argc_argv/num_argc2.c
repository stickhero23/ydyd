/**
 * @file num_argc2.c
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
 * @brief Prints the count of arguments less the first argument (program name)
 * 
 */
 int main(int argc, char *argv[])
{
    (void) argv;
    printf("%d\n", argc - 1);
    return (0); 
}