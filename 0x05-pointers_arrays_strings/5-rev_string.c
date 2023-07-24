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
	int i;
	int len;
	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_puts(&s[i]);
	}
}
