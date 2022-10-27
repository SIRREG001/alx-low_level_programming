#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: starting integer
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
		}
	}
}
