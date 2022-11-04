#include <stdio.h>
/**
 * @brief Counts Vowels
 * 
 */
char countVowels(char *s)
{
    int i, j;
    
    j = 0;
    for (i = 0; i != '\0'; i++)
    {
        j++;
    }
    return (j);

}
int main()
{
    char *s = "Homecup";
    printf("The number of vowels is: %d\n", countVowels(s));
    return (0);
}