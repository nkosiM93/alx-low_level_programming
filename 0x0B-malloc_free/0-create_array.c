#include "main.h"

/**
 * create_array - create an array of characters
 * @size: sizeof array to be created
 * @c: the characeter to initiaize the array with
 * Return: pointer adress to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str != NULL)
	{
		str[0] = c;
		return (str);
	}
	else
		return (NULL);
}
