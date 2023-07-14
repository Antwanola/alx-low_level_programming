#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is the entry point
 * Description: A program printing rand num
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is possitive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
