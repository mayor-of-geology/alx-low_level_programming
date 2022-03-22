#include <unistd.h>
#include <stdio.h>

/**
 * _putchar: returns a character
 * @c: input value
 * Return: the char value passed into it
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
