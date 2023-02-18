#include <stdio.h>
/**
 *main - print ABC in reverse
 *Description: Prints ABC... in reverse
 *Return: 0, end program
 */
int main(void)
{

int digi = 122;

for (; digi >= 97; digi--)
	putchar((char)digi);

putchar('\n');

return (0);
}
