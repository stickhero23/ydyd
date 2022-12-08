#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * @brief This program creates and opens a text file with
 * permission 0600;  It then writes into it, close, then open
 * in read only the prints what was written in the file.
 * It demonstrates write() and read() and open() functions.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[])
{
    int fd;
    char buf[14];
    /* write */
    fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

    /* checks if it successfuly created and open file*/
    if (fd == -1)
    {
        printf("Failed to create and open the file.\n");
        exit(1);
    }
    /* writes hellow World in the file */
    write(fd, "Hello World!\n", 13);

    close(fd);
    /* opens file as Read Only */
    fd = open("myfile.txt", O_RDONLY);

    if (fd == -1)
    {
        printf("Failed to create and open the file.\n");
        exit(1);
    }
    /* now read the file */
    read(fd, buf, 13); /* 13 characters in the string */
    buf[13] = '\0'; /* show that it is NULL terminated */

    close(fd);

    printf("buf: %s\n", buf);

    return 0;
}