#include "variadic_functions.h"

/**
 * print_numbers - prints numbes
 * @separator: ...
 * @n: ...
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	i = 0;
	va_start(list, n); /* initilaization */

	while (i < n)
	{
		if(separator != NULL && i != (n - 1))
		{
			printf("%d%s", va_arg(list, int), separator);
		}
		else
			printf("%d", va_arg(list, int));
		i++;
	}

	printf("\n");
}
