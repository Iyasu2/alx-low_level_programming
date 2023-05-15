#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * usage - Entry point
 * Description: 'error print'
 *
 * Return: none
 */
void usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * open_file - Entry point
 * Description: 'open file'
 *
 * @file_name: char input
 * @flags: int input
 * @mode: mode_t input
 * Return: int
 */
int open_file(char *file_name, int flags, mode_t mode)
{
	int fd = open(file_name, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}
	return (fd);
}

/**
 * copy_file - Entry point
 * Description: 'copy file'
 *
 * @fd_from: int input
 * @fd_to: int input
 * Return: none
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t len;
	char buffer[BUFFER_SIZE];

	while ((len = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, len) != len)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * close_file - Entry point
 * Description: 'close file'
 *
 * @fd: int input
 * Return: none
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * Description: 'copies content of a file to another file'
 *
 * @argc: int input
 * @argv: char input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		usage();

	fd_from = open_file(argv[1], O_RDONLY, mode);

	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	copy_file(fd_from, fd_to);

	close_file(fd_from);

	close_file(fd_to);

	return (0);
}
