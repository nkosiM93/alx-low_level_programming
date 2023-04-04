#include "function_pointers.h"

/**
 * int_index - ...
 * @size: ...
 * @array: ...
 * @cmp: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{

	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]))
			return (ind);
	}
	}
	
	return (-1);
}
