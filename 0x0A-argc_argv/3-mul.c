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
	int first, second, output;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		output = first * second;

		printf("%d\n", output);
		return (0);
	}

}
