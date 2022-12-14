/* r1.c
   Jim Plank
   September, 1996 */

/* This program shows some simple examples of using
   the system call read() to read from a file. */


#include <fcntl.h>
int main()
{
  char *c;
  int fd, sz;

  c = (char *) calloc(100, sizeof(char));

  fd = open("in1", O_RDONLY);
  if (fd < 0) { perror("r1"); exit(1); }

  sz = read(fd, c, 10);
  printf("called read(%d, c, 10).  returned that %d bytes  were read.\n",
         fd, sz);
  c[sz] = '\0';
  printf("Those bytes are as follows: %s\n", c);

  sz = read(fd, c, 99);
  printf("called read(%d, c, 99).  returned that %d bytes  were read.\n",
         fd, sz);
  c[sz] = '\0';
  printf("Those bytes are as follows: %s\n", c);

  close(fd);
}
