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

	for (num1 = 48; num1 <= 56; num1++)
	{
	for (num2 = num1 + 1; num2 <= 57; num2++)
	{
	putchar(num1);
	putchar(num2);
		if (num1 != 56 || num2 != 57)
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
