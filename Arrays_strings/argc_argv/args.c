#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * @brief prints the number of arguments including the program name
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[])
{
    (void) argv;
    printf("%d\n", argc);

    return (0); 
} 
