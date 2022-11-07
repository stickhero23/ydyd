#include <stdio.h>
/**
 * @brief 
 * 
 */
int main()
{
    int *p;
    int n;

    p = &n;
    n = 98;
    
    *p = 402;
    /*printf("Value of 'n' is: %d\n", n); */

    char *c; /* pointer to type char */
    char m; /*a char variable*/
    
    c = &m; /* c now points to m */
    m = 'k'; /* value of m or stored in m is now character k */

    /* *c = 'n'; /* dereferencing c by putting character n*/

    printf("Value of m is: %c\n", m);
    printf("Value of m is: %p\n", &m);
    /**int my_array[4];
    my_array[0] = 12;
    my_array[1] = 16;
    my_array[2] = 18;
    my_array[3] = 19;
    printf("The values of my array are: %d\n", my_array[11]); 
    */
    return(0);

}