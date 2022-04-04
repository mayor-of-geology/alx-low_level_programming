#include <stdio.h>

/**
 * main - a program that printsthe number of argument
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: nothing
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
