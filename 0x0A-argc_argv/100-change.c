#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: prints the minimum number of coins
 * @argc: the count of the arguments passed
 * @argv: the Arguments
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int curr, exchange = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		curr = atoi(argv[1]);
		while (curr > 0)
		{
			if (curr >= 25)
				curr -= 25;
			else if (curr >= 10)
				curr -= 10;
			else if (curr >= 5)
				curr -= 5;
			else if (curr >= 2)
				curr -= 2;
			else if (curr >= 1)
				curr -= 1;
			exchange += 1;
		}
	}
	printf("%d\n", exchange);
	return (0);
}
