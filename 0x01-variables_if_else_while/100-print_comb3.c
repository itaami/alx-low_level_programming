#include <stdio.h>
/**
 * main - the entry of our program
 * Return: always 0 (success)
 */
int main(void)
{
	int a = '0';
	int b = '1';

	while (a <= '9')
	{
		if (a != b)
		{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if ((a + b) != ('8' + '9'))
			{
			putchar(',');
			putchar(' ');
			}
			b++;
		}
		}
		a++;
		b = (a + 1);
	}
	putchar('\n');
	return (0);
}
