/* * print_something - function to print something
* Return: Always 0
*/
int main(int num)
{
    num = 4;
    int i, j;
    for (i = 0; i < num + 1; i++)
    {
        for (j = 0; j < num + 1; j++)
        {
            printf("%d", i * j);
            if (j < num)
            {
                printf(", ");
            }
        }
        printf("\n");
    }
    return (0);
}