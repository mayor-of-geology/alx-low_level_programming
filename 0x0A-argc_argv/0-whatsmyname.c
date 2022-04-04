#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 */
int main(int argc, char* argv)
{
	if (argc > 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
}

