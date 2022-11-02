#include "main.h"
/**
 * @brief _memcpy() function copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int j = n;

    if (j > 0)
    {
        int i;

        i = 0;
        while (i < j)
        {
            dest[i] = src[i];
            i++;
        }
        
    }
    return (dest);
    
}