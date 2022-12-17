#include <stdio.h>

/**
 * main - print buzz for multiple of 3 and 5
 * Return: 0
 */

int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
			printf(" %d", n);
	}
	printf('\n');
	return (0);
}
