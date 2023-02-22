#include <unistf>

/**
 *_islower - checks if character is lowecase or not
 *@c: character to be checked
 *Return: 1 if character is lowercase, 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
