#include <stdio.h>
/**
 * main - entry function
 * Description: using just putchar to print all the alphabets
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		printf("%d", i++);
	}
	putchar('\n');
	return (0);
}

