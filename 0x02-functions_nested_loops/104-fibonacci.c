#include <stdio.h>
/**
 * printFibonacci- returns the lenth of string
 * @n : operand number
 * Return: number of digits
 */

void printFibonacci(int n)
{
	int fib1 = 1;
	int fib2 = 2;

	printf("%d, %d", fib1, fib2);

	int count = 2;

	while (count < n)
	{
		int fib = fib1 + fib2;

		printf(", %d", fib);
		fib1 = fib2;
		fib2 = fib;
	count++;
	}
	printf("\n");
}
/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	printFibonacci(98);
	return (0);
}

