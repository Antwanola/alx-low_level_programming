#include "main.h"
/**
 * reverse_array - reverse an array
 * Description: Takes an array address and reverses its content
 * @a: array address goes here
 * @n: the size of an array stays here
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{

	int half_len = n / 2, i, temp;

	while (i < half_len - 1)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}



}
