#include <stdio.h>
/**
 *main - print 0-9
 *Description: Prints base 10 digits using putchar
 *Return: 0, end program
 */
int main(void)
{

	int digi = 48;

	for (; digi <= 57; digi++)
		putchar((char)digi);

	putchar('\n');

	return (0);
}
