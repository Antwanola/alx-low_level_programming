 #include "main.h"
/**
 * _strspn- gets the len of accepts if available in s
 * Description: gets len of s in accepts
 * @s: string input
 * @accept: reference string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c = 0;

	if ((s[0] == '\0') || (accept[0] == '\0'))
	{
		return (0);
	}

	for (a = 0; s[a] != '\0'; a++)
	{
		if (c != a)
			break;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}

		}
	}
	return (c);
}
