#include "main.h"

/**
 * reverse_array -  reverses the order of the array
 * @a: the array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int s, b, m;

	m = n / 2
	
	for (s = 0; s < m; s++)
	{
		b = a[s];
		a[s] = a[n-1-s];
		a[n-1-s] = b;
	}

}
