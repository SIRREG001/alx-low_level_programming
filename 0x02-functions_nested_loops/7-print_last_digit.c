#include "main.h"
/**
 * print_last_digit - entry point
 * @n: integer inwhich its last digit is to be found
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		last = (-1 * (n % 10));
		_putchar(last + '0');
		return (last);
	}
}
