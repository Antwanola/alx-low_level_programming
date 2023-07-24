#include "main.h"
#include <string.h>

/**
 * rev_string -  entry point
 * @s: string goes here
 *
 * Return void
 */

void rev_string(char *s)
{
	int len =  strlen(s);
	int middle, i;
	char temp;

	middle = len / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = s[i];
	}
}
