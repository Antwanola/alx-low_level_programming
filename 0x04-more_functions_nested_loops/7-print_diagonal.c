#include "main.h"


/**
 *print_diagonal - Makes a diagonal line
 *
 * Description: The function takes a number and make a diagonal line nth times
 * @n: Takes int number for number of lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
