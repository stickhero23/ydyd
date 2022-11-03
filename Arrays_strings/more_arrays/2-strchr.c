#include "main.h"
#define NULL 0
/**
 * @brief locates a character in a string
 * 
 */
char *_strchr(char *s, char c)
{
    int i;

    i = 0;
    while (s[i] != '\0' && s[i] != c)
        i++;
    if (s[i] == c)
    {
        return (&s[i]);
    }
    else
    {
        return (NULL);
    }
    
    
    return (0);
    
}