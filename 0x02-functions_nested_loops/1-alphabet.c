#include "main.h"
/**
 * print_alphabet - entry point
 * Return: 0 ends program
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}