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
		putchar((char)character);
		if (character != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
			putchar('\n');
		return (0);
}
