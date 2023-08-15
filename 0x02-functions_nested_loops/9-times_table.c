#include "main.h"
/**
 * times_table -  function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b, d;

	for (a = 0 ; a <= 9 ; a++)
	{
		b = 0;
		for (b = 0 ; b <= 9 ; b++)
		{
			d = (a * b);
			if (d <= 9)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(d + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				int e = (d / 10);
				int f = (d % 10);

				_putchar(e + '0');
				_putchar(f + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
