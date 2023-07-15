#include <stdio.h>
/**
 * main - entry function
 * Description: using just putchar to print nums and spaces
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	putchar(num + '0');
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

