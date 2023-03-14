#include "main.h"
#include <stdlib.h>

/**
 * str_concat - ...
 * @s1:...
 * @s2:...
 * Return: ...
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int b, c;

	b = 0;
	c = 0;
	str = NULL;

	if (s1 != NULL)
	{
		while (s1[b] != '\0')
			b++;
	}

	if (s2 != NULL)
	{
		while (s2[c] != '\0')
		{
			c++;
			b++;
		}
	}

	if (s1 == NULL && s2 == NULL)
		return (malloc(sizeof(char)));/*allocating mem 4 empty string*/

	str = malloc(sizeof(char) * (b + 1));
	c = 0;

	if(str == NULL)
		return (NULL);
	else
	{
		if (s1 != NULL)
			while (s1[c] != '\0')
			{
				*(str + c) = *(s1 + c);
				c++;
			}

		if (s2 != NULL)
			while (*s2)
			{
				*(str + c) = *s2;
				s2++;
				c++;
			}
		
		*(str + c) = '\0';
		return (str);
	}
}
