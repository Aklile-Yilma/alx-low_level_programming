#include "main.h"
/**
 * _islower - Checks the lower case character
 *
 * @c : Character in ASCII
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
