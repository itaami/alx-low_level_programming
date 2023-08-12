#include <stdio.h>
/**
 * main - entry point of our program
 * Return: always 0 (success)
 */
int main(void)
{
	char c = '0';
	char b = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
