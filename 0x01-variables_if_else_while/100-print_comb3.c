#include <stdio.h>

/**
 * main - two digit combination
 * Return: 0
 */
int main(void)
{
	char ones;
	char tens;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!(ones == tens) || (tens > ones))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

