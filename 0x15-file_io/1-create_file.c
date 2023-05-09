#include "main.h"
#include <fcntl.h>

/**
 * create_file -  create a text file
 * @filename: name of the file to be created
 * @text_content: what to write to the file if created
 * Return: 1 on success,-1 on any failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		nwritten = write(fd, text_content, strlen(text_content));
		if (nwritten == -1)
			return (-1);
	}
	
	close(fd);

	return (1);
}
