#include "main.h"
/**
 * @brief 
 * 
 * @param n 
 * @param divisor 
 * @return int 
 */
int is_odd(int n, int divisor)
{
    if (n % 2 == 0)
    {
        return (0);
    }
    return (is_odd(n, divisor));

}
/**
 * @brief 
 * 
 * @param n 
 * @return int 
 */
int is_odd_number(int n)
{
    int divisor = 2;
    if (n <= 0)
    {
        return (0);
    }
    return (is_odd(n, divisor));
    
}