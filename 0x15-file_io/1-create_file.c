#include "main.h"

/**
 * create_file - that used to creates a file.
 * @fitestame: is a pointer to the name of the file to create it .
 * @text_content: is a pointer to a string to write it to the file.
 *
 * Return: that will retur n if the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *fitestame, char *text_content)
{
	int j, p, test = 0;

	if (fitestame == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (test = 0; text_content[test];)
			test++;
	}

	j = open(fitestame, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p = write(j, text_content, test);

	if (j == -1 || p == -1)
		return (-1);

	close(j);

	return (1);
}
