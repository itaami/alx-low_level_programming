#include "main.h"
/**
* _islower - function that checks for lowercase character
*
* Return: when is lower return 1 when is not return 0
*
*@c: argument for the function _islower
*/
int _islower(int c)
{

if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
return (0);
}
