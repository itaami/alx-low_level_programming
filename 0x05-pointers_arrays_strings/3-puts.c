#include "main.h"
/**
 *_puts - a function that prints a string, followed by a new line
 *@str: argument
 */
void _puts(char *str)
{
	int i;
	char c;

	for (i = 0; i < 1000; i++)
	{
		c = str[i];
		if (c == '\0')
		{
			i = 1000;
		}
		else
			_putchar(c);
	}
	_putchar('\n');
}
