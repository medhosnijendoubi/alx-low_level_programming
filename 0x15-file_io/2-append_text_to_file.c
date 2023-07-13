#include "main.h"

/**
 * append_text_to_file - that will used to appends text at the end of a file.
 * @filename: is a pointer used to the name of the file.
 * @text_content: is a string to add to the end of the file.
 *
 * Return: that the function fails or filename is NULL - -1.
 *         that the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, p, test = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (test = 0; text_content[test];)
			test++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	p = write(j, text_content, test);

	if (j == -1 || p == -1)
		return (-1);

	close(j);

	return (1);
}

