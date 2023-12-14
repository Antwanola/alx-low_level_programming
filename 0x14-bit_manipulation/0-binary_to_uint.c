#include "main.h"

/**
  * binary_to_uint- get binary num as int and convert to base 10
  * @b: the binary number in string
  * Return: Unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (!b)
	return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) + (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (result);
}
