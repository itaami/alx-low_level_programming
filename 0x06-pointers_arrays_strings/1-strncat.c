#include "main.h"
/**
 *_strncat - function that concatenates two strings.
 *@dest : first arguent
 *@src: second argument
 *@n: third argument
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *c = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);

}
