#include "main.h"

/**
 * _isalpha -- Checks for alphabetical character
 *
 * @c : input integer that corresponds to an ASCII value
 *
 * Returns 1 if c is a letter, lowecase or uppercase. Return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}