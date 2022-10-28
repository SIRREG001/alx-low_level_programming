#include <stdio.h>
/**
 * main - entry point
 * Return: sum of all positive multiples of 3 and 5 below 1024
 */
int main(void)
{
	int i;
	int z = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			z = z + i;
		}
	}
	printf("%d\n", z);
	return (0);
}
