#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- assing memory using malloc
 * @b: malloc size
 * Return: pointer ddress to newly assinged memory
 */


void *malloc_checked(unsigned int b)
{
	return (malloc(b));
}
