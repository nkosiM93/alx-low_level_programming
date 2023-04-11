#include <fcntl.h>
#include "main.h"

/**
 * _copy - copies contents from one file to the other
 * @filename: the original file
 * @fl2: the copy file
 * Return: 1 if successful -1 if not
 */

int _copy(const char *filename, const char *fl2)
{
	int fd, fd2;
	char c[1024];
	ssize_t a, b, c;

	if (filename = NULL || fl2 == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	fd2 = open(fl2, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl2);
		exit(99);
	}

	while ((a = read(fd, c, sizeof(c)) > 0))
	{
		b = write(fd2, c, sizeof(c));
		if (b < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl2);
			exit(99);
		}
	}

	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	c = close(fd);
	d = close(fd);`:wq


}
