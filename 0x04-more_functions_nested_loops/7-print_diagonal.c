#include "main.h"

/**
 * print_diagonal - entry point
 * @n: number of times diagonal line will be printed
 */
void print_diagonal(int n)
{
	int i = 0;
	int ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
