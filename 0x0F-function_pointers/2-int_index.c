#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index- finding index
 * @array: array input
 * @size: size of an array
 * @cmp: function pointer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
