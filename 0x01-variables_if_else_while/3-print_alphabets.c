#include <stdio.h>
/**
 *main - print ABC...
 *Description: d
 *Return: 0, end
*/
int main(void)
{
        char abc;

        for (abc = 97; abc <= 122; abc++)
        {
                putchar(abc);
        }
	for (abc = 65; abc <= 90; abc++)
        {
                putchar(abc);
        }
        putchar('\n');
        return (0);
}
