#include "main.h"
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: pointer to pointer 
 */

char **strtow(char *str)
{
	char **stringsR;
	char *strTok = strtok(str, " ");
	int count, i;

	count = 0;

	while (strTok != NULL)
	{
		count++;/*counting for the purporse of stringsR*/
		strTok = strtok(NULL, " ");
	}

	stringsR = (char **)malloc(count * sizeof(char *));
	strTok = strtok(str, " ");
	i = 0;

	/*dereference or allocate each string to the stringsR array*/
	while (strTok != NULL)
	{
		stringsR[i] = strTok;
		strTok = strtok(NULL, " ");
		i++;
	}

	return (stringsR);
}
