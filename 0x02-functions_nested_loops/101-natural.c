#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0
 */
int main(void)
{
	int n = 1024;
	int a = 0;
	int m, k, mi, sum1, sum2, sum, l;

	sum1 = 0;
	sum2 = 0;
	mi = 0;
	for (a = 0; a <= (1024 / 3); a++)
	{
		m = (a * 3);
		if (m < n)
		{
			sum1 = (sum1 + m);
		}
	}
	for (a = 0; a <= (1024 / 3); a++)
	{
		k = (a * 5);
		if (k < n)
		{
			sum2 = (sum2 + k);
		}
	}
	for (a = 0; a <= (1024 / 3); a++)
	{
		l = (a * 15);
		if (l < n)
		{
			mi = (mi + l);
		}
	}
	sum = (sum1 + sum2 - mi);
	printf("%d\n", sum);
	return (0);
}
