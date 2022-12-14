#include "main.h"

/**
 * print_sign - identify sign
 * @n: the number to be identified
 * Return: 1 for postive 0 for zero and -1 fo negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
