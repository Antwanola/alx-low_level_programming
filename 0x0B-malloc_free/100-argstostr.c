#include <stdlib.h>
#include "main.h"

/**
 * argstostr - argument to become string
 * @ac: argument count
 * @av: argument vector
 * Return: NULL or pointer
 */

char *argstostr(int ac, char **av)
{
	int i, f, d = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (f = 0; av[i][f]; f++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (f = 0; av[i][f]; n++)
	{
		str[d] = av[i][f];
		d++;
	}
	if (str[d] == '\0')
	{
		str[d++] = '\n';
	}
	}
	return (str);
}
