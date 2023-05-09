#include "main.h"

/**
 * read_textfile - reads a certain number of characters and prints
 * them on the std output
 * @filename: the file to be read for the text
 * @letters: the number of letters to read from the text feile
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	FILE *fp;
	char c;

	if (filename != NULL)
	{
		fp = fopen(filename, "r");
		if (fp == NULL)
			return (0);

		while (letters > 0 && (c = getc(fp)) != EOF)
		{
			putc(c, stdout);
			count++;
			letters--;
		}

		fclose(fp);
		return (count);
	}
	else
		return (0);
}
