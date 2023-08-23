#include "main.h"
/**
 *string_toupper - function that changes all lowercase letters to uppercase.
 *@str: char
 *Return: it returns a uppercase
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
			i = 100;
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = (str[i] - 32);
		}
	}
	return (str);
}
