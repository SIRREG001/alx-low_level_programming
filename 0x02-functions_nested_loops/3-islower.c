#include "main.h"
/**
 * _islower - entry point
 * Return: 1 if c is lowercase
 * @c: contains value to be compared
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
