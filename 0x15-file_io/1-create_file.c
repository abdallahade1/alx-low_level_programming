#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: return -1 if it fails, else 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, l);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
