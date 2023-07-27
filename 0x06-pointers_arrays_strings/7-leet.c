#include "main.h"

/**
* leet - encoding a string to 1337
* @b: pointer for string to be encoded
*
*Return: char
*/

char *leet(char *b)
{
	char *u = b;
	char e[] = {'a', 'e', 'o', 't', 'l'};
	char d[] = {4, 3, 0, 7, 1 };
	int s = 0;

	while (*b)
	{
		for (s = 0; s < 5; s++)
		{
			if (*b == e[s] || *b == e[s] - 32)
			{
				*b = d[s] + '0';
			}
		}
		b++;
	}
	return (u);
}
