#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: prints alphabets
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
