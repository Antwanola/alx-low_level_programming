#include "main.h"
/**
 * print_last_digit - gets the last digit of anumber
 *
 * Description: printing the last digit
 * @n: takes in numbers
 * Return: returns last num
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
