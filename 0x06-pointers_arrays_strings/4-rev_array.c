#include "main.h"
/**
 * reverse_array - reverse array
 * Description: reverse inputed array
 * @a: inputed array
 * @n: array length
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp =  a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

