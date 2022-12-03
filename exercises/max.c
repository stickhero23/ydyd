#include <stdarg.h>

max(int a, int b, ...);

// Find the maximum of 2 (or more) non-negative integers.
// (Note: Pass a negative value as the last parameter.)
int 
max(int a, int b, ...)
{
  int      current, result;
  va_list  last_fixed;

  // Handle the two required parameters
  result = -1;
  if (a > result) result = a;
  if (b > result) result = b;

  // Handle the variable number of parameters
  va_start(last_fixed, b);
  do 
  {
    current = va_arg(last_fixed, int);
    if (current > result) result = current;

  } while (current >= 0); // The sentinel hasn't been encountered
  va_end(last_fixed);

  return result;
}
        