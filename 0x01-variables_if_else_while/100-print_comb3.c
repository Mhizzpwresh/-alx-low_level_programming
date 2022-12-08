#include <stdio.h>

/**
*main - main block
*Description:  a program that prints all possible different combinations
*of two digits.
*Numbers must be separated by ,, followed by a space
*The two digits must be different
*01 and 10 are considered the same combination of the two digits 0 and 1
*Print only the smallest combination of two digits
*Numbers should be printed in ascending order, with two digits
*You can only use the putchar function (every other function
*(printf, puts, etc…) is forbidden)
*You can only use putchar five times maximum in your code
*You are not allowed to use any variable of type char
*Return: 0
*/

int main(void)
{
int x, y;
for (x = 48; x < 58; x++)
{
for (y = 48; y < 58; y++)
{
if (y > x)
{
putchar(x);
putchar(y);
if (x < 56 || y < 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}

