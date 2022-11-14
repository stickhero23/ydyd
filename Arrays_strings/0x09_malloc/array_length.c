/**
 * @file array_length.c
 * @author your name (you@domain.com)
 * @brief The user counts the array length (number of elements entered as terminal input)
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int length_array;
    int *nums;
    (void) argv;

    length_array = argc -1;
    printf("length: %d\n", length_array);

    return (0);
}