#include "main.h"
/**
* print_sign - function that checks the sign of the input
*
*@n: the input or the argument of our function
*Return: return 1 if the n positive
*return 0 if the n is null
*return -1 if the n is negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
