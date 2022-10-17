#include <stdio.h>
/**
 * main - entry point
 * Return: 0 ends the program
 */
int main(void)
{
	int combo;

	for (combo = 48; combo <= 57; combo++)
	{
		putchar(combo);
		if (combo == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
