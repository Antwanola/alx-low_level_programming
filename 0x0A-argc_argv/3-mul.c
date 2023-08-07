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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int first = atoi(argv[1]);
		int second = atoi(argv[2]);
		int output = first * second;

		printf("%d\n", output);
		return (0);
	}

}
