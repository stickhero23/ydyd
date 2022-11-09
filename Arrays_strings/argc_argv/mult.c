#include <stdio.h>
#include <stdlib.h>
/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char *argv[])
{


    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
        printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return (0);

}

/* Version 2*/
int main(int argc, char *argv[])
{
    int mult;

    if (argc == 3)
    {
        mult = atoi(argv[1]) * atoi(argv[2]);
        printf("%d\n", mult);
        return (0);
    }
    printf("Error\n");
    return (1);    
}