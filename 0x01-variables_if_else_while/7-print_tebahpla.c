#include <stdio.h>

/**
 * main - entry point
 * Return: 0 ends the program
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
