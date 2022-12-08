#include <stdio.h>
#include <stdlib.h>

FILE * fopen(const char *filename, const char *mode);

int main(void)
{
    int c;
    FILE *fd;

    fd = fopen("example.txt", "r");

    if (fd)
    {
        while ((c = fgetc(fd)) != EOF)
        {
            putchar(c);
            fclose(fd);
        }
    }
}