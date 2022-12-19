#include "main.h"

/**
 * swap_int - swaps the values of two variables
 * @a: pointer a
 * @b: ponter b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
