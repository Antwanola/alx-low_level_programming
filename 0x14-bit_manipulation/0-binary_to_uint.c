#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint- convert binary numbers
  * @b: the bin input
  * Return: Unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result |= b[i] - '0';
		}
		else
			return (0);
		i++;
	}
	return (result);
}
