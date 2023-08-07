#include <stdio.h>
#include <string.h>
/**
 * main - prints all given arguments
 * @argc:	Argument count
 * @argv:	Argument vector
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
