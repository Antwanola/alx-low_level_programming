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

	for (num1 = 48; num1 <= 54; num1++)
	{
		for (num2 = num1 + 1; num2 <= 55 ; num2++)
	{
		for (num3 = num2 + 1; num3 <= 56; num3++)
	{
		putchar(num1);
		putchar(num2);
		putchar(num3);
	if (num1 != 55 || num2 != 56 || num3 != 57)
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
