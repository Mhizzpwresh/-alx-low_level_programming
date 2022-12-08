#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be seperated by comma and a pace
 * Numbers should be displayed in the same order
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
