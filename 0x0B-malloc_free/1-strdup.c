#include "main.h"

/**
 * _strdup - retuns pointer to newly allocated space in memory
 * contains a copy of string passed as a paarameter
 * @str: to be duplicated
 * Return: pointe rto duplicated string
 */

char *_strdup(char *str)
{i
	if (str == NULL)
		return (NULL);

	char *dupli;

	int len;

	dupli = malloc(sizeof(char) * (strlen(str) + 1));

	if (dupli == NULL)
		return (NULL);

	strcpy(dupli, str);

	return (dupli);
}
