#include <stdlib.h>
#include <time.h>
/**
 *main - Prints whether value is positive or negagtive
 *Description: The function takes a value and checks whetherits +/-
 *Return: 0, program ends here
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
