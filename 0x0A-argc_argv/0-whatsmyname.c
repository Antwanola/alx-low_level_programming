#include <stdio.h>
#include <string.h>
/**
 * main - prints the program name
 * @argc: the argument count
 * @argv: the argument params
 * Return: int
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
