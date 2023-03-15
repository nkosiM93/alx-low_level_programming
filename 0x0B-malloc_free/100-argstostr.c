#include "main.h"
#include <string.h>

/**
 * argstostr - combines a number of arguments
 * @ac: number of arguments
 * @av: the strings to combine
 * Return: the combined string
 */

char *argstostr(int ac, char **av)
{
	int len, i;
	char *str1;

	len = 0;

	if (ac == 0 || av == NULL)
		return  (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(*(av + i));
	}

	len += ac;

	str1 = malloc(len);

	if (str1 == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(str1, av[i]);
		strcat(str1, "\n");
	}

	return (str1);
}
