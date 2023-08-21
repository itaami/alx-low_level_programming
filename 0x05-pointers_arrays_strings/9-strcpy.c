#include "main.h"
/**
 * _strcpy - a function
 * @dest: argument
 * @src: argument
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char c;

	for (i = 0; i < 3000; i++)
	{
		c = src[i];
		if (c == '\0')
		{
			dest[i] = c;
			i = 3000;
		}
		else
		{
			dest[i] = c;
		}
	}
	return (dest);
}
