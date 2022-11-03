#include "main.h"
/**
 * @brief 
 * 
 */
unsigned int _strspn(char *s, char *accept)
{
    int i, j, k;

    i = 0;
    k = 0;

    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                k++;
                break;
            }
            if (accept[j + 1] == '\0' && s[i] != accept[j])
                return (k);
            j++;
        }
        
        
        i++;
    }
    return (k);


}