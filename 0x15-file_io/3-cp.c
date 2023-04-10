#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int copy_file(char *from, char *to);

/**
 * copy_file - A function that copies the content of a file to another
 * @from: source file
 * @to: destination file
 * Return: 1 if successful
 */
int copy_file(char *from, char *to)
{
	int from_fd, to_fd, from_c, to_c, r, w;
	char *buffer;

	buffer = malloc(1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	from_fd = open(from, O_RDONLY);
	r = read(from_fd, buffer, 1024);
	to_fd = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from_fd == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			free(buffer);
			exit(98);
		}
		w = write(to_fd, buffer, r);
		if (to_fd == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			free(buffer);
			exit(99);
		}
		r = read(from_fd, buffer, 1024);
		to_fd = open(to, O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	from_c = close(from_fd);
	to_c = close(to_fd);
	if (from_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (to_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (1);
}

/**
 * main - A program that copies the contents of a file to another
 * @argc: num of args
 * @argv: args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
