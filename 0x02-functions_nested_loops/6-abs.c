#include "main.h"
/**
 * _abs - entry point
 * Return: absolute int of the number
 * @c: value to be absoluted
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c == 0)
	{
		return (0);
	}
	else
	{
		return (c * (-1));
	}
}
