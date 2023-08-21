#include "main.h"
/**
 * puts2 - that prints every other character of a string
 *@str: a string
 */
void puts2(char *str)
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
		else if (i % 2 == 0)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
