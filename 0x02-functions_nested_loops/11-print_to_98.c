#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: starting integer
 */
void print_to_98(int n)
{
	int last = 98;
	int c = n;

	if (c < last)
	{
		for (c = n; c < last; c++)
		{
			printf("%d, ", c);
			printf("%d\n", last);
		}
	}
	else
	{
		for (c = n; c > last; c--)
		{
			printf("%d, ", c);
			printf("%d\n", last);
		}
	}
}
