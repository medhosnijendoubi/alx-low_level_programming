#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - that will used to allocatea a 1024 bytes for a buffer.
 * @file: is a name of the file buffer that was storing chars for.
 *
 * Return: that will retur n pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *test;

	test = malloc(sizeof(char) * 1024);

	if (test == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (test);
}

/**
 * close_file - that will used to closes file descriptors.
 * @fd: is a file descripted to be closed.
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main -  that will used to copies the contents of a file to another file.
 * @argc: is a number of arguments supplied to the program.
 * @argv: its an array of a pointers to the arguments.
 *
 * Return: retur n 0 on success.
 *
 * Description: when the argument count is incorrect - exit code 97.
 *              when file_from does not exist or cannot be read - exit code 98.
 *              when file_to cannot be created or written to - exit code 99.
 *              when file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int test1, no, p, k;
	char *test;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	test = create_buffer(argv[2]);
	test1 = open(argv[1], O_RDONLY);
	p = read(test1, test, 1024);
	no = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (test1 == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(test);
			exit(98);
		}

		k = write(no, test, p);
		if (no == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(test);
			exit(99);
		}

		p = read(test1, test, 1024);
		no = open(argv[2], O_WRONLY | O_APPEND);

	} while (p > 0);

	free(test);
	close_file(test1);
	close_file(no);

	return (0);
}
