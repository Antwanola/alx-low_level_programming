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

	for (num1 = 48; num1 < 56; num1++)
	{
	for (num2 = num2 + 1; num2 <57 ; num2++)
	{
	for (num3 = num2 + 1; num3 < 58; num3++)
	{
	putchar((num1 % 10) + '0');
	putchar((num2 % 10) + '0');
	putchar((num3 % 10) + '0');
	if (num1 == 47 && num2 == 56 && num3 == 57)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
