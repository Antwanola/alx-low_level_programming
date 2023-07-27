#include "main.h"


char *cap_string(char *q)
{
	int i;

	while (q[i] != '\0')
	{
		if (q[i] >= 'A' && q[i] <= 'Z')
		{
			q[i] = q[i] -32;
		}
		i++;
	}

	return (q);
}
