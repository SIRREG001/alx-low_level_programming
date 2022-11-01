#include "main.h"
/**
 * _isupper - entry point
 * @c: character to be tested for uppercase
 * Return: 1 or 0 if character is uppercase and lowercase respectively
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
