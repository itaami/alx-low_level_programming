#include "main.h"
/**
* _isalpha - fuction that checks if the input is a alphabet
*
*@c: the argument of the function
*
*Return: return 1 if the input is a alphabet or 1 if not
*/
int _isalpha(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
return (0);
}
