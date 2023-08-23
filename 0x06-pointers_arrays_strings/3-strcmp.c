#include "main.h"
/**
 *_strcmp - function that compares two string.
 *@s1: the first string
 *@s2: the second string
 *Return: it return a int.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, l;

	j = 0;
	l = 0;
	for (i = 0; i < 1000; i++)
	{
		j = i + 2;
		if (s1[i] == '\0')
			i = 1000;
	}
	for (i = 0; i < 1000; i++)
	{
		l = i + 2;
		if (s2[i] == '\0')
			i = 1000;
	}
	if (j == l)
	{
		k = j - l;
	}
	else if (j < l)
	{
		k = (l + j) * (-1);
	}
	else if (j > l)
	{
		k = j + l;
	}
	return (k);
}
