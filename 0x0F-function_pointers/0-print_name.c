#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string to be printed
 * @f: fucntion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
	else
		return;
}
