#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: arguments strings
 * Return: 0 as usual
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}

	printf("%d\n", i);

	return (0);
}
