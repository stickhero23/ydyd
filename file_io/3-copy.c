#include "main.h"
/**
 * file_exit - prints error and exits
 * @error: num of exit error
 * @s: string, name of the the files
 * @fd: file descriptor
 * Return: 0 on success
 */
int file_exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't real from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}
/**
 * main - entry point
 * @argc: arguments counter
 * @argv: vector of arguments
 * Return: exit with error or return 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, r_read, r_write;
	char *buffer[1024];

	if (argc != 3)
		file_exit(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		file_exit(99, argv[2], 0);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		file_exit(98, argv[1], 0);

	for (; (r_read = read(fd1, buffer, 1024)) != 0;)
	{
		if (r_read == -1)
			file_exit(98, argv[1], 0);
		r_write = write(fd2, buffer, r_read);
		if (r_write == -1)
			file_exit(99, argv[2], 0);
	}
	close(fd2) == -1 ? (file_exit(100, NULL, fd2)) : close(fd2);
	close(fd1) == -1 ? (file_exit(100, NULL, fd1)) : close(fd1);
	return (0);
}