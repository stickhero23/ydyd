#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int length_array;
    int *nums;
    (void) argv;

    length_array = argc -1;
    nums = malloc(sizeof(int) * length_array);

    printf("length: %d\n", length_array);

    return (0);
}