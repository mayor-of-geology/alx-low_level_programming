#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: is a digit
 * Return: 1 if c is digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
