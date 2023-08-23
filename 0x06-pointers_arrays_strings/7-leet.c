#include "main.h"
/**
 *leet - a function that encodes a string into 1337.
 *@str: char
 * Return: char
 */
char *leet(char *str)
{
	int i, j;
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	char s[] = {'4', '3', '0', '7', '1'};

	for (i = 0; (i < 100) && (str[i] != '\0'); i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if ((str[i] == l[j]) || (str[i] == k[j]))
			{
				str[i] = s[j];
			}
		}
	}
	return (str);
}
