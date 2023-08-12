#include <stdio.h>
/**
 * main - the entry of the program
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar('0' + a);
		if (a != 9)
		{
		putchar(',');
		putchar(' ');
		}
		a++;
	}
	putchar('\n');
return (0);
}
