#include <stdio.h>
#include <string.h>
/**
 * @brief 
 * 
 */
int main()
{
    char my_name[] = "Johnathan";
    char my_greet[] = "Morning ";

    printf("The new word is: %s\n", strcat(my_greet, my_name));
    printf("Te short greetings: %s\n", strncat(my_greet, my_name, 4));
    printf("Name: %c\n", my_name[5]);

    return(0);
}