#include "main.h"
#include <unistd.h>
/**
 * main - entry point, prints character
 * Return: 0 ends program
 */

int main(void)
{
	char my_string[8] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(my_string[c]);
	}
	_putchar('\n');
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
