#include <stdio.h>
#include <stdlib.h>

/**
 * main - function which prints
 * @argc: length
 * @argv: cont arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int k;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (k < atoi(argv[1]) - 1)
	{
		printf("%02hhx ", ((char *) main)[k]);
		k++;
	}
	printf("%02hhx\n", ((char *) main)[k]);
	return (0);
}
