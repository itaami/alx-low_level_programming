#include <stdio.h>
/**
 * main - the entry point of the program
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
