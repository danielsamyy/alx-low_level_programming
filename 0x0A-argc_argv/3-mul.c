#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: a program that multiplies two numbers.
 * @argc: the count of the arguments
 * @argv: the Arguments
 * Return: Always (0).
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc < 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	total = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", total);

	return (EXIT_SUCCESS);
}
