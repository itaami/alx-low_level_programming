 #include "main.h"
/**
 *puts_half - a function that prints half of a string
 *@str: a string
 */
void puts_half(char *str)
{
	char c;
	int i, l, k;

	for (i = 0; i < 1000; i++)
	{
		c = str[i];
		if (c == '\0')
		{
			k = i;
			i = 1000;
		}
	}
	 l = (k + 1) / 2;
	for (i = l; i <= 500; i++)
	{
		c = str[i];
		if (c == '\0')
		{
			i = 500;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
