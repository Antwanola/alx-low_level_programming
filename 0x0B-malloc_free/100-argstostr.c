#include <stdlib.h>
#include "main.h"

/**
 * argstostr - argument to string
 * @ac: argument count
 * @av: argument vector
 * Return: NULL or pointer
 */

char *argstostr(int ac, char **av)
{
	int i, f, g = 0, l = 0;
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
	for (f = 0; av[i][f]; f++)
	{
		str[g] = av[i][f];
		g++;
	}
	if (str[g] == '\0')
	{
		str[g++] = '\n';
	}
	}
	return (str);
}
