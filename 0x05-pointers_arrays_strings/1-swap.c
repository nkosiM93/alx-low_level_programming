#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: the ONE int
 * @b: the other int
 */

void swap_int(int *a, int *b)
{
	int *t; /*hold temp value*/

	*t = *b;
	*b = *a;
	*a = *t;

}
