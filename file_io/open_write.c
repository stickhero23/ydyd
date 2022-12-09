/* w1.c
   Jim Plank
   September, 1996 */

/* This program opens the file "out3" in the current 
   directory for writing, and writes the string "cs360\n"
   to it. */

#include <fcntl.h>
main()
{
  int fd, sz;

  fd = open("out3", O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if (fd < 0) { perror("r1"); exit(1); }

  sz = write(fd, "cs360\n", strlen("cs360\n"));

  printf("called write(%d, \"cs360\\n\", %d).  it returned %d\n",
         fd, strlen("cs360\n"), sz);

  close(fd);
}