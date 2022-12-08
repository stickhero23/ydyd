/* o2.c
   Jim Plank
   September, 1996 */

/* This program attempts to opens the file "out1" 
   for writing in the current directory.  Note that
   this fails because "out1" does not exist already.
   See o3.c for an example of a opening "out1"
   properly. */

#include <fcntl.h>

main()
{
  int fd;

  fd = open("out1", O_WRONLY);
  if (fd < 0) {
    perror("out1");
    exit(1);
  }
}