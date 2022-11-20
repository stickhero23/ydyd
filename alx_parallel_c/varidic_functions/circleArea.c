#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 * @param rad 
 * @return int 
 */
int main(void)
{
    const double Pi = 3.142;
    int Area;
    int rad = 5;
    Area = rad * rad * Pi;

    printf("Area is %d\n", Area);

    return (0);
}