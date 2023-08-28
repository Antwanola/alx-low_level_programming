#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _realloc- reallocate mem
  * @ptr: pointer
  * @old_size: size
  * @new_size: new size
  * Return: void
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
