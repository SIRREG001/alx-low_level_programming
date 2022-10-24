#include "main.h"
/**
 * print_sign - entry point
 * Return: sign depending if number is greater than 0 less than 0 or equal to 0
 * @n: number to be compared
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
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
}

