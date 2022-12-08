#include "main.h"

/**
*print_sign - Print the sign of a number
* @n: type int integer, can be negative or positive
* Description: print +, - or 0 depending on the number
* Return: 1 if +, 0 if 0, and -1 if -
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
_putchar(48);
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
