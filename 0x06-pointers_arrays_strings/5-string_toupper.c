#include "main.h"
/**
 * string_toupper - converts and lower case to upper
 * Description: Upper case comverter
 * @s: String
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;

	}
	return (s);
}
