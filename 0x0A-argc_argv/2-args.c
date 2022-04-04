#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
