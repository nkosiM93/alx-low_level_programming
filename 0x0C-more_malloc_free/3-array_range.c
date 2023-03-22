#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arry of int
 * @min: start value
 * @max: end value
 * Return: pointer to the created array of ints
 */

int *array_range(int min, int max)
{
	int *ints, range, i;

	if (min < 0 || max <= 0 || max <= min)
		return (NULL);

	range = max - (min - 1);

	ints = malloc(range * sizeof(int));

	if (ints == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		*(ints + i) = i + min;
	}

	return (ints);
}
