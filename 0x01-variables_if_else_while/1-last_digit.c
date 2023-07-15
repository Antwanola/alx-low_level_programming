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
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n != 0)
	{
			mod = n % 10;
			if (mod > 5)
			{
			printf("Last digit of %d is %d and is greater than 5\n", n, mod);
			}
			else if (mod == 0)
			{
			printf("Last digit of %d is %d and is 0\n", n, mod);
			}
			else if (mod < 6 && mod != 0)
			{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
			return (0);
			}
	}
	else
	printf("%d is zero\n", n);
	return (0);
}
