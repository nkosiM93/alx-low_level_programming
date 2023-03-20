#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - combine two strings
 * @s1: the string to be contacted
 * @s2: the string to combined
 * @n: the number of charcaters to be copied
 * Return: resultant string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *theStr;

	if (strlen(s2) <= n)
		theStr = malloc((strlen(s1) + sizeof(s2)));
	else
		theStr = malloc(strlen(s1) + n + 1);

	if (theStr == NULL)
		return (NULL);

	strcpy(theStr, s1);
	strncat(theStr, s2, n);

	return (theStr);
}
