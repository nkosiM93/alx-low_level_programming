File Edit Options Buffers Tools C Help
#include <stdlib.h>
#include <time.h>
/**
*main - positive, zero or neg more
*Description: Print where value lies
*Return: 0 end.
*/
int main(void)
{
	int n;

 srand(time(0));
 n = rand() - RAND_MAX / 2;
 if (n > 0)
	 printf("%d is positive\n", n);
 else if (n == 0)
	 printf("%d is zero\n", n);
 else
	 printf("%d is negative\n", n);
}
