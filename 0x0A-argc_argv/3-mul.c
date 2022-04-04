#include <stdio.h>

/**
 * main - multiplies two number
 * @argc - number of CL arguments
 * @argc - array of CL arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
