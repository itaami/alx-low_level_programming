#include "main.h"
/**
 *print_line - function that draws a straight line in the terminal.
 *@n: argument
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
