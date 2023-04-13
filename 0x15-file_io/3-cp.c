#include <fcntl.h>
#include "main.h"

int _copy(const char *filename, const char *fl2);

/**
 * main - the main program
 * @ac:...
 * @av:...
 * Return: 0 on failour
 */

int main (int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_copy(av[1], av[2]);
	return (0);
}

/**
 * _copy - copies contents from one file to the other
 * @filename: the original file
 * @fl2: the copy file
 * Return: 1 if successful -1 if not
 */

int _copy(const char *filename, const char *fl2)
{
	int fd, fd2, d, e;
	char c[1024];
	ssize_t a, b;

	if (filename == NULL || fl2 == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename), exit(98);
	}
	fd2 = open(fl2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl2), exit(99);
	}
	while ((a = read(fd, c, sizeof(c))) > 0)
	{
		b = write(fd2, c, a);
		if (b < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl2), exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename), exit(98);
	}
	if ((d = close(fd)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd), exit(100);
	if ((e = close(fd2)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd2), exit(100);
	return(1);
}
