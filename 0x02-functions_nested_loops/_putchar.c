#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * c - the input character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno isset appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
