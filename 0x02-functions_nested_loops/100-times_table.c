#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function that prints the n times table
 * @n: the argument
 */
void print_times_table(int n)
{
	int i, j;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int d = (i * j);

				if (n == 0)
					printf("%d", d);
				else if (j == 0)
					printf("%d, ", d);
				else if (d <= 9)
				{
					if (j == n)
						printf("  %d", d);
					else
						printf("  %d, ", d);
				}
				else if (d <= 99)
				{
					if (j == n)
						printf(" %d", d);
					else
						printf(" %d, ", d);
				}
				else if (d <= 999)
				{
					if (j == n)
						printf("%d", d);
					else
						printf("%d, ", d);
				}
			}
			printf("\n");
		}
	}
}
