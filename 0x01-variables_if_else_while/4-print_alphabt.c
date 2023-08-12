#include <stdio.h>
/**
 * main - the entry point of our program
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
		putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
