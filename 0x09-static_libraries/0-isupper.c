#include "main.h"

/**
 * _isupper - checks for upper case letter
 * @c: input character
 * Return: 1 for upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
