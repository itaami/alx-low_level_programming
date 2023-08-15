#include "main.h"
/**
* print_alphabet_x10 - function that print the lowercase alphabet 10 times
*/
void print_alphabet_x10(void)
{
int i = 1;

while (i <= 10)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
