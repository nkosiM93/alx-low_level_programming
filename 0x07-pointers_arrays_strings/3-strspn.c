#include "main.h"

/**
 * _strspn - returns the length of the initial what what
 * @s: ...
 * @accept: the characters to find in the string s
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, count1;
	int r, k;

	r = 0;
	count = 0;

	for (; s[r] != '\0'; r++)
	{
		count1 = count;
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[r])
			{
				count++;
				break;
			}
			else
				k++;
		}

		if (count - count1 == 0)
			break;
	}

	return (count);
}
