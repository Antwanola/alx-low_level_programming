#include "main.h"

/**
 * rev_string -  entry point
 * @s: string goes here
 *
 * Return void
 */

void rev_string(char *s)
{
	int i;
	char *temp;

	for (i = 0; i >= 0; i--)
	{
		temp = s[i];

		s = temp;
	}
}
