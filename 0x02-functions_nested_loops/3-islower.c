#include "main.h"

/**
 * _islower - checks if c is a lower case
 * @c: is the input value
 * Return: 1 if c is lower case. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
