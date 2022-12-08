/* c1.c
   Jim Plank
   September, 1996 */

/* This program opens and closes the file "in1" in 
   a variety of ways.  Make sure you understand 
   this program, especially the return values of the
   open calls. */

#include <fcntl.h>

main()
{
  int fd1, fd2;

  fd1 = open("in1", O_RDONLY);
  if (fd1 < 0) {
    perror("c1");
    exit(1);
  }

  fd2 = open("in1", O_RDONLY);
  if (fd2 < 0) {
    perror("c1");
    exit(1);
  }

  printf("opened the file in1 twice:  Fd's are %d and %d\n", fd1, fd2);

  if (close(fd1) < 0) {
    perror("c1");
    exit(1);
  }
  if (close(fd2) < 0) {
    perror("c1");
    exit(1);
  }

  printf("closed both fd's\n");

  fd2 = open("in1", O_RDONLY);
  if (fd2 < 0) {
    perror("c1");
    exit(1);
  }
  
  printf("reopened in1 into fd2: %d\n", fd2);

  if (close(fd2) < 0) {
    perror("c1");
    exit(1);
  }

  printf("closed fd2.  Now, will call close(fd2) again\n");
  printf("This should cause an error.\n\n");

  if (close(fd2) < 0) {
    perror("c1");
    exit(1);
  }

}