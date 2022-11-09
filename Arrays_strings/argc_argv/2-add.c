#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i, sum;

    if (argc == 1)
    {
        printf("0\n");
    }
    for (i = 1; i < argc; i++)
    {
        sum = 0;
        if ((argc > 1) && (atoi(argv[i]) >= '0' && atoi(argv[i]) <= '9'))
        {
            sum += atoi(argv[i]);
            printf("%d\n", sum);
            return (0);
        }
        printf("Error\n");
        return (1);

    }
    return (0);
     
}