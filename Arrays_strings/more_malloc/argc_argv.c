#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *nums;
    int i, j, n, len;
    int mem; 

    len = argc - 1;
   /* mem = len * sizeof(int); */

    /* nums = malloc(mem); */
    nums = malloc(sizeof(mem) * len);
    /* printf("%d\n", mem); */

    j = 0;
    for (i = 1; i < argc; i++)
    {
        nums[j] = atoi(argv[i]);
        j++;
    }
    for (n = 0; n < argc -1; n++)
    {
        printf("element: %d\n", nums[n]);
    }
    free(nums);
    
    return (0);
    
}