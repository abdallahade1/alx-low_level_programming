#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: Number of bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	bytes = read(file_desc, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(file_desc);
	return (bytes);
}
