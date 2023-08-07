#include <stdio.h>
#include <string.h>

/**
 * main - multiplies argv values
 * @argc: argument count
 * @argv: argument vectors
 * Return: Error if none or imcomplete values are provided
 */

int main(int argc, char **argv)
{

	if (argv[1] && argv[2])
	{
		int first = atoi(argv[1]);
		int second = atoi(argv[2]);
		int output = first * second;

		printf("%d\n", output);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
