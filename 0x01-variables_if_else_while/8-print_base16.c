#include <stdio.h>

/**
*main - main block
*Description:  a program that prints all the numbers of base 16 in lowercase,
*followed by a new line.
*You can only use the putchar function
*(every other function (printf, puts, etc…) is forbidden)
*All your code should be in the main function
*You can only use putchar three times in your code
*Return: 0
*/

int main(void)
{
int x;
char c;

for (x = 48; x < 58; x++)
{
putchar(x);
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

