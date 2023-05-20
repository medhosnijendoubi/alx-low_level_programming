#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - that will used to reads a text file
 * and prints this text to posix stdout.
 * @filename: is a pointer used to the name of the file.
 * @letters: is a number of letters the function that should read and print.
 *
 * Return: that will returnss if the function fails or filename is NULL - 0.
 *     O/w - this is the number of bytes of the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *test;

	if (filename == NULL)
		return (0);

	test = malloc(sizeof(char) * letters);
	if (test == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, test, letters);
	w = write(STDOUT_FILENO, test, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(test);
		return (0);
	}

	free(test);
	close(o);

	return (w);
}
