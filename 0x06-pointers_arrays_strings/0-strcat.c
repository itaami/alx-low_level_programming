#include "main.h"
/**
 *_strcat -  a function that concatenates two strings.
 *Return: pointer to the resulting string dest
 *@dest: the first argument
 *@src: the second argument
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
