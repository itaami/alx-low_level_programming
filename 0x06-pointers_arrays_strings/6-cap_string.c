#include "main.h"
/**
 *cap_string - function that capitalizes all words of a string.
 *@str: char
 *Return: it returns char
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		if ((str[i] == '\t') || (str[i] == '\t'))
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				str[i + 1] = (str[i + 1] - 32);
		}
		else if (str[i] == '\0')
			i = 1000;
		else if (str[i] == ' ')
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
			{
				str[i + 1] = (str[i + 1] - 32);
			}
		}
	}
	return (str);
}
