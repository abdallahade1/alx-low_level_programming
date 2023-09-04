#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGPR | S_IWGRP | S_IROTH)

/**
 * main - program
 * @arg_c: argument count
 * @arg_v: argument vector
 * Return: 1 on success, 0 if it fails
 */

int main(int arg_c, char **arg_v)
{
	int from_f = 0, to_f = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (arg_c != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_f = open(arg_v[1], O_RDONLY);
	if (from_f == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, arg_v[1]), exit(98);
	to_f = open(arg_v[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_f == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, arg_v[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, arg_v[1]), exit(98);

	from_f = close(from_f);
	to_f = close(to_f);
	if (from_f)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_f), exit(100);
	if (to_f)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_f), exit(100);

	return (EXIT_SUCCESS);
}
