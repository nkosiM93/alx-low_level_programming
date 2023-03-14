#include "main.h"

/**
 * _strdup - retuns pointer to newly allocated space in memory
 * contains a copy of string passed as a paarameter
 * @str: to be duplicated
 * Return: pointe rto duplicated string
 */

char *_strdup(char *str)
{
	char *dupli;

	int y;

	y = 0;

	if (str != NULL)
	{
		while (str[y] != '\0')
		{
			y++;
		}

		dupli = malloc(sizeof(char) * y);

		if (dupli == NULL)
			return (NULL);

		while (y > 0)
		{
			dupli[y - 1] = str[y - 1];
		}

		free(dupli);

		return (dupli);
	}
	else
		return (NULL);
}
