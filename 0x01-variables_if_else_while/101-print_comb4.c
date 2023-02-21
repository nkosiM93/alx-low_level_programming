#include <stdio.h>
/**
 *main - Prints three numbers combinations
 *Return: 0.
 *Description: Print a combination of three digits in the base ten number system
 */
int main(void)
{
int num1;
int num2;
int num3;

for (num1 = 48; num1 < 57; num1++)
{
       num2 = num1 + 1;

       for (; num2 <= 57; num2++)
       {
	       num3 = num2 + 1;

	       for (; num3 <= 57; num3++)
	       {
		       putchar((char)num1);
		       putchar((char)num2);
		       putchar((char)num3);

		       if (num1 == 55 && num2 == 56 && num3 == 57)
		       {
		       }
               else
               {
                       putchar(',');
                       putchar(' ');
               }
	       }
       }
}
putchar('\n');
return (0);
}
