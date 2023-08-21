#include "main.h"
/**
 *print_rev - a function that prints a string, in reverse
 *@s: the argument
 */
void print_rev(char *s)
{
	char c, d;
	int i, k;

	for (i = 0; i < 1000; i++)
	{
		c = s[i];
		if (c == '\0')
		{
			k = i;
			i = 1000;
		}
	}
	for (i = (k - 1); i >= 0; i--)
	{
		d = s[i];
		_putchar(d);
	}
	_putchar('\n');
}
