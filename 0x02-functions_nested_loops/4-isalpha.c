#include "main.h"
/**
 * _isalpha - entry point
 * Return: 1 if c is lowercase or uppercase
 * @c: letter to be compared
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
