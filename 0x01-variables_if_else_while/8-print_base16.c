#include <stdio.h>
/**
 *main - prints base 16 digits
 *Description: Program prints the base 16 number system
 *Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
		putchar((char)digit);
	for (digit = 97; digit <= 102; digit++)
		putchar((char)digit);
	putchar('\n');

	return (0);
}
