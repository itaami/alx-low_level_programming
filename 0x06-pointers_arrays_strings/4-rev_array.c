#include "main.h"
/**
 *reverse_array - function that reverse the content of an array of integers.
 *@a: int
 *@n: int
 */
void reverse_array(int *a, int n)
{
	int i;
	int b[100];

	for (i = 0; i <= n; i++)
	{
		b[i] = a[(n - i - 1)];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
