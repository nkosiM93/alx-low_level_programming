#include <stdio.h>
/**
 *main - Print base 10 digits
 *Description: Program prints all digits of the base ten system
 *Return: 0, ends the program
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}
