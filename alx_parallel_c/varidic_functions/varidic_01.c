#include <stdio.h>
#include <stdarg.h>

/* print all args one at a time until a negative argument is seen;
   all args are assumed to be of int type */
void printargs(int arg1, ...)
{
  va_list ap; /* declaring a variable ap of type va_list*/
  int i;

  va_start(ap, arg1);  /* start to iterate arguments*/
  for (i = arg1; i >= 0; i = va_arg(ap, int))
    printf("%d ", i);
  va_end(ap); /* free the va_list*/
  putchar('\n');
}

int main(void)
{
   printargs(5, 2, 14, 84, 97, 15, -1, 48, -1); /* calling the function by including the fixed arguments, optional args*/
   printargs(84, 51, -1, 3);
   printargs(-1);
   printargs(1, -1);
   return 0;
}