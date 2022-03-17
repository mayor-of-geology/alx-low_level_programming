#include "main.h"

/**
 * print_number - prints number 0 - 9
 * Return: number 0 - 9 with a new line
 */
void print_numbers(void)
{
	int i;
	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
