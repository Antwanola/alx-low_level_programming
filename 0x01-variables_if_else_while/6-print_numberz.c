#include <stdio.h>
/**
 * main - entry function
 * Description: using just putchar to print all the integers
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar('0' + i++);
	}
	putchar('\n');
	return (0);
}

