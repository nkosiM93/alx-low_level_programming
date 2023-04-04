#include "function_pointers.h"

/**
 * array_iterator - ...
 * @array: ...
 * @size: ...
 * @action: ...
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
