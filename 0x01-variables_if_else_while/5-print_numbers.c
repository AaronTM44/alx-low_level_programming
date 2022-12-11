#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: print numbers 
 * Return: 0
 */
int main(void)
{
	char n = '0';

	while (n < '10')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
