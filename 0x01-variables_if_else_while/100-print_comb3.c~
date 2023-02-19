#include <stdio.h>
/**
 *main - Prints two numbers combinations
 *Return: 0.
 *Description: Print a combination of two digits in the base ten number system.
 */
int main(void)
{
	char num1;
	char num2;

	for (num1 = '0'; num1 < '9'; num1++)
	{
		num2 = num1 + 1;

		for (; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == '8' && num2 == '9')
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
