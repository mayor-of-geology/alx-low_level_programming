#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
	{
		if (i != 'p' && i != 'e')
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}