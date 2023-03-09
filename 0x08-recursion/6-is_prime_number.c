#include "main.h"

/**
 * primeNumb - ...
 * @nm: ...
 * @t: ...
 * Return: 0 if not and 1 if it is...
 */

int primeNumb(int nm, int t);

/**
 * is_prime_number - ...
 * @n: integer to be checked for primeness
 * Return: 0 if not and 1 if it is...
 */

int is_prime_number(int n)
{
	int t;

	t = 3;

	if (n == 1)
		return (1);
	if (n % 2 == 0)
		return (0);

	return (primeNumb(n, t));
}

int primeNumb(int nm, int t)
{
	int answer;

	if (nm == t)
		return (1);

	if (nm % t == 0)
		return (0);

	t++;

	if (t < 9)
	{
		answer = primeNumb(nm, t);
	}

	if (t == 9)
		if (nm % t == 0)
			answer = 0;
		else
			answer = 1;

	return (answer);
}
