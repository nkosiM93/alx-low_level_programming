#include <stdio.h>
#include <unistd.h>

/**
 *main - Display
 *Return: 0 (Success)
 *Description: Display text
 */

int main(void)
{
	if (write(1, "and that piece of art is useful\" - Dora Korpar,"
		  " 2015-10-19\n", 57) != 57)
		return (1);
	else
		return (0);
}
