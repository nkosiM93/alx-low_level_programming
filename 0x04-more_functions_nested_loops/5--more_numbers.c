#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10 rows, 1 - 14
 */

void more_numbers(void)
{
        int n;

        for (n = 48; n < 58; n++)
        {
                if (n != 48)
                        _putchar(n);

                for (n1 = 48; n1 < 58; n1++)
                {
                        if (n >= 49 && n1 == 53)
                                break;
                        else
                        {
                                _putchar(n1);
                        }
                }
        }

        _putchar('\n');
}
