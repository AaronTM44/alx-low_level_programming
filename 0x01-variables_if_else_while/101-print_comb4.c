#include <stdio.h>

/**
 * main - prints combination of three digits
 * Return: 0
 */
int main(void)
{
	int o = '0';
	int t = '0';
	int h = '0';

	for (h = 0; h <= '9'; h++)
	{
		for (t = '0'; t <= '9'; t++)
		{
			for (o = '0'; o <= '9'; o++)
			{
				if (!((o == t) || (t == h) || (t > o) || (h > t)))
				{
					putchar(h);
					putchar(t);
					putchar(o);
					if (!(o == '9' && t == '8' && h == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}