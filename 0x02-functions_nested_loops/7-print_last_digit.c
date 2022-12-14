#include "main.h"

/**
 * print_last_digit - prints last digti
 * @n: the number
 * Return: 0
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
		a *= -1;
	_putchar(a);

	return (0);
}
