#include <stdio.h>
/**
 * main - entry function
 * Description: using just putchar to print all the alphabets
 * Return: 0 (success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
	for (num2 = num2 + 1; num2 <= 10; num2++)
	{
	for (num3 = num2 + 1; num3 <= 11; num3++)
	{
	putchar((num1 % 10) + '0');
	putchar((num2 % 10) + '0');
	putchar((num3 % 10) + '0');
	if (num1 != 8 || num2 != 9 || num3 != 10)
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
