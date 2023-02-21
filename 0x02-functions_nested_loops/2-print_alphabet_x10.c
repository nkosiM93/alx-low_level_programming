#include <unistd.h>
#include "main.h"

/**
 *_putchar - print character
 *Description: print alphabet alphaet in lower case
 *@c: parameter to be displayed
 *Return: 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *print_alphabet_x10 - print ABC x 10
 */
void print_alphabet_x10(void)
{
	char index;
	int a;

	for (a = 0; a < 10; a++)
		for (index = 'a'; index <= 'z'; index++)
		{
			_putchar(index);
		}
}
