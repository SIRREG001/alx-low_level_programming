#include <stdio.h>
/**
 * main - entry point
 * Return: 0 ends the program
 */
int main(void)
{
	char hex_no;

	for (hex_no = 48; hex_no <= 57; hex_no++)
	{
		putchar(hex_no);
	}
	for (hex_no = 97; hex_no <= 102; hex_no++)
	{
		putchar(hex_no);
	}
	putchar('\n');
	return (0);
}
