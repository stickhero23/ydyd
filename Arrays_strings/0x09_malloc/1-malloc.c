#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);


    int *A = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    int *B = (int*)realloc(A, 2 * n * sizeof(int)); /*Using realloc*/
    int *A = (int*)realloc(A, 0); /* Equivalent to free(A) */
    int *B = (int*)realloc(NULL, n * sizeof(int)); /* Equivalent to malloc()*/
    printf("Prev Block address = %d, new address = %d\n", A, B);
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", B[i]);
    }
    return (0);
}