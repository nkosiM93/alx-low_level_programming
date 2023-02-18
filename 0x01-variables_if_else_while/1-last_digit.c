#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints last didgit of a given number
 *Description: Prints pos of last digit of a given number
 *Return: 0 - end program
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, (n % 10));
	if ((n % 10) > 5)
		printf(" and is greater than 5\n");
	if ((n % 10) == 0)
		printf(" and is 0\n");
	if ((n % 10) < 6 && (n % 10) != 0)
		printf(" and is less than 6 and not 0\n");
	/* your code goes there */
	return (0);
}
