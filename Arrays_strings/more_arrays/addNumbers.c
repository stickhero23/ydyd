#include <stdio.h>
/**
 * @brief Adds digits of a number
 * 
 */
unsigned int addNumbers(unsigned int num)
{
    // base case
    if (num == 0)
        return 0;
    return (num % 10) + addNumbers(num / 10);
}
int main()
{

    printf("%i\n", addNumbers(58773));
    return 0;
}