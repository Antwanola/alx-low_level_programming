#include "main.h"

/**
 * rot13 - Encode a string to rot13
 * @b: string to encode
 * Return: pointer to encoded string
 */
char *rot13(char *b)
{
	char change, *d = b;

	while (*b)
	{
		change = (*b & 32) + 65;
		if ((*b >= 'a' && *b <= 'z') || (*b >= 'A' && *b <= 'Z'))
			*b = (*b - change + 13) % 26 + change;
		b++;
	}
	return (d);
}
