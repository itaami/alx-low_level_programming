#include "main.h"
/**
*print_last_digit -  function that prints the last digit of a number.
*@n: the argument
*Return: return the last digit
*/
int print_last_digit(int n)
{
int m = (n % 10);

if (n < 0)
{
m = -m;
_putchar('0' + m);
return (m);
}
else
{
_putchar('0' + m);
return (m);
}
}
