#include <stdio.h>
/**
 *main - prints 1-9
 *Description: Prins all possible combisnation of single digits
 *Return: 0
 */
int main(void)
{
	int character;

	for (character = 48; character <= 57; character++)
	{
		if (character != 57)
		{
			putchar((char)character);
			putchar(',');
			putchar(' ');
		}
		else
			putchar((char)character);
	}
	return (0);
}
