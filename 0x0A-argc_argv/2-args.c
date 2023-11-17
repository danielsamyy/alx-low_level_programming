#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a program that prints all args
 * @argc: the count of the arguments
 * @argv: the Arguments
 * Return: Always (0).
 */
int main(int argc, char const *argv[])
{
int i;
i = 0;

while (argc--)
{
	printf("%s\n", argv[i]);
	i++;
}

return (0);
}
