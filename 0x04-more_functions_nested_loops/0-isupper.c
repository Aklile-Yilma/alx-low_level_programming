#include "main.h"

/**
 * _isupper - function hat checks for uppercase character.
 * @c: input value to check
 * Return: int.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
