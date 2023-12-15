 #include "main.h"

/**
 * get_endianness - Get the endianness of a computer data arranegement
 * Return: intger
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (*ptr == 1);
}
