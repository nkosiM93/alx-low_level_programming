#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, checkr, checkw;
	char *c;

	if (filename == 0)
		return (0);

	c = malloc(letters + 1);

	if (c == 0)
		return (0);

	fd  = open(filename, O_RDONLY);

	if (fd == -1)
		return (free(c), 0);

	checkr = read(fd, c, letters);

	if (checkr == -1)
		return (free(c), 0);

	c[letters] = '\0';

	checkw = write(STDOUT_FILENO, c, checkr);
	if (checkw == -1)
		return (free(c), 0);

	free(c);
	close(fd);
	return (checkw);
}

