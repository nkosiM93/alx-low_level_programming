#include <stdio.h>
/**
 *main - Prints two numbers combinations
 *Return: 0.
 *Description: Print a combination of two digits in the base ten number system.
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 48; num1 < 57; num1++)
	{
		num2 = num1 + 1;

		for (; num2 <= 57; num2++)
		{
			putchar((char)num1);
			putchar((char)num2);
			if (num1 == 56 && num2 == 57)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
