#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i;

	if (argv[1] && argv[2])
	{
		int first = atoi(argv[1]);
		int second = atoi(argv[2]);
		printf("%d\n", first * second);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
