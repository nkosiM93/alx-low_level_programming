#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - append tect to a text file
 * @filename: the name of the file to append text to
 * @text-content: the content to be appeded to the file
 * Return: returns 1 if successful and0 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		wrt = write(fd, text_content, strlen(text_content));
		if (wrt == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
