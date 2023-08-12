#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					if ((a + b) != (c + d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
		c = a;
	}
	putchar('\n');
	return (0);
}
