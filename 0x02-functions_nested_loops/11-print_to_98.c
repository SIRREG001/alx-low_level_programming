#include "main.h"
/**
 * print_to_98 - entry point
 * @n: starting integer
 */
void print_to_98(int n)
{
	int last = 98;
	int c = n;

	if ((c == 0 || c < 0) && (c < 98 || c == 98))
	{
		for (c = n; c = last; c++)
		{
			_putchar(c + '0');
			if (c == last)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (c == n; c == last; c--)
		{
			_putchar(c + '0');
			if (c == last)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
}
