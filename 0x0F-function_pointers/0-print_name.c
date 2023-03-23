#include "main.h"

/**
 * print_name - prints a name
 * @name: the string to be printed
 * @f: fucntion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
