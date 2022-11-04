#include "main.h"

/**
 * create_file - Create the file.
 * @filename: Pointer to name of the file to create.
 * @text_content: Pointer to the string to write to the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int u, d, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	u = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	d = write(u, text_content, len);

	if (u == -1 || d == -1)
		return (-1);

	close(u);

	return (1);
}
