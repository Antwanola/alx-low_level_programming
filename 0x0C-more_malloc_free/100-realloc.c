#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * _realloc- reallocate mem
  * @ptr: pointer
  * @old_size: size
  * @new_size: new size
  */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
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
