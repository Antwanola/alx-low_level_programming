#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-loop through array
 * @array: given array
 * @size: the size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
