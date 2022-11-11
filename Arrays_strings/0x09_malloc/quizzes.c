#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s;

    s = strdup("Best School");
    if (s != NULL)
    {
        free(s);
    }
}