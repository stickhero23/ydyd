#include <stdio.h>
int main()
{
    char *p = "Hello World!";
    int i;
    
    //while (p[i] != '\0')
    //{
      //  printf("The Address is:%c\n", p[i]);
        //i++;
    //}
    //  &p[2]) = *(p + 2) 
    // *(p + 6) = 'W'
    //int **k;
    //printf("Size of k is:%d\n", sizeof(**k)) 

    int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    printf("The Array is:%d\n", a[0][1]);
    return (0);   
}