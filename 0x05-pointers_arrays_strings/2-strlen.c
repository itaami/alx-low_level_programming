#include "main.h"
/**
 *_strlen - a function thet returns the length of a string
 *@s: the argument
 *Return: it's return the length of string
 */
int _strlen(char *s)
{
	int k, i;
	char c;

	for (i = 0; i < 1000; i++)
	{
		c = s[i];
		if (c == '\0')
		{
			k = i;
			i = 1000;
		}
	}
	return (k);
}
