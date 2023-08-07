#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: arguments strings
 * Return: 0 as usual
 */

int main(int argc, char **argv)
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
