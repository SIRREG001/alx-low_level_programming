#include "main.h"
/**
 * more_numbers - entry point
 */
void more_numbers(void)
{
	int a, i;
	int b = 0;

	while (b < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			i = a;
			if (a > 9)
			{
				_putchar('1');
				i = a % 10;
			}
			_putchar(i + '0');
		}
		_putchar('\n');
		b += 1;
	}
	_putchar('\n');
}
