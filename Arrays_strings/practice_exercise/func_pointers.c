#include <stdlib.h>
#include <stdio.h>
/** int circleArea(int rad);

int circleArea(int rad)
{
    float area;
    area = 3.142 * rad * rad;
    printf("The area of a circle is %.2f\n", area);

    return (0);
}
int main()
{
    circleArea(7);
    return (0);
}
*/


void findSum(int arr[])
{
    int i;
    int sum;
    sum = 0;
    while (i <= arr[i])
    {
        sum += arr[i];
        i++;
    }
    
    printf("The sum of array is %d\n", arr[i]);
}
int main()
{
    /* void (*findSum)(int) = &findSum; */

    /*Invoke findSum*/
    int i = 0;
    int *arr;
    arr[0] = 45;
    arr[1] = 34;
    arr[2] = 12;
    arr[3] = -4;
    arr[4] = 11;
    (*findSum)(arr[i]);

    return (0);
}
