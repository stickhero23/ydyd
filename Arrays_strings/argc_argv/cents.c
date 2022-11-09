#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, cents = 0;
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    if (atoi(argv[1]) < 0)
    {
        printf("0\n");
        return (0);
    }
    
    i = atoi(argv[1]);

    cents += i / 25;
    i = i % 25;
    cents += i / 10;
    i = i % 10;
    cents += i / 5;
    i = i % 5;
    cents += i / 2;
    i = i % 2;
    cents += i / 1;

    printf("%d\n", cents);

    return (0);

    
    
}