/* o1.c
   Jim Plank
   September, 1996 */

/* This program opens the file "in1" in the current 
   directory, and prints out the return value of 
   the open() system call.  If "in1" exists, open()
   will return a non-negative integer (three).  If
   "in1" does not exist, then it will return -1. */

#include <fcntl.h>

main()
{
  int fd;

  fd = open("in1", O_RDONLY);
  printf("%d\n", fd);
}