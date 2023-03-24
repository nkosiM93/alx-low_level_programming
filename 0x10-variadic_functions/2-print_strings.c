#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: ...
 * @n: ...
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	i = 0;

	for (; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
		{
			str = va_arg(list, char *);

			if (str != NULL)
				printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}
		else
		{
			str = va_arg(list, char *);

			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}

	printf("\n");
}
