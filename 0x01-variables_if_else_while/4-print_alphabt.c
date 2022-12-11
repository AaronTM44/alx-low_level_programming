#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prits alphabets
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	do 
	{
		putchar(c);
		putcchar('\n');
		c++;
	}while ( c != 'q' || c != 'e');
	return (0);
}
