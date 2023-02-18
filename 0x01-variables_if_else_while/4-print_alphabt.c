#include <stdio.h>
/**
 *main - print ABC..
 *Description: Prints all aphabet in lowercase except p and e
 *Return: 0, end program
*/
int main(void)
{
char abc;

for (abc = 97; abc <= 122; abc++)
{
	if (abc != 101 && abc != 113)
		putchar(abc);
}
putchar('\n');
return (0);
}
