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

char *str(char *theStr, char *s1, char *s2, int n)
{
	if (theStr == NULL)
                return (NULL);

	if (s1 == NULL)
	{
		strncpy(theStr, s2, n);
		return (theStr);
	}
	else if (s2 == NULL)
	{
		strncpy(theStr, s1, n);
		return (theStr);
	}
	else
	{
		strcpy(theStr, s1);
		strncat(theStr, s2, n);
		return (theStr);
	}
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *theStr;

	if (s1 == NULL && s2 == NULL)
		return ("");
	else if (s1 == NULL)
	{
		theStr = malloc(sizeof(s2));
		return (str(theStr, s1, s2, n));
	}
	else if (s2 == NULL)
	{
		theStr = malloc(sizeof(s1));
		return (str(theStr, s1, s2, n));
	}
	else
	{
		if (strlen(s2) <= n)
		{
			theStr = malloc((strlen(s1) + sizeof(s2)));
			return (str(theStr, s1, s2, n));
		}
		else
		{
			theStr = malloc(strlen(s1) + n + 1);
			return (str(theStr, s1, s2, n));
		}
	}
}
