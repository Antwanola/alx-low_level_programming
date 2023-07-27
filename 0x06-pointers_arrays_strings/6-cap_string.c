#include "main.h"
/**
 * cap_string - prints 1st letters as upper
 * Description: Takes a pointer str and conversts first letter to upper
 * @q: takes string pointers
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int a;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ' ';

	for (a = 1; s[a] != '\0'; a++)
	{
		if ((s[a - 1] == ' ' || s[a - 1] == '\n' || s[a - 1] == '\t'
		     || s[a - 1] == ',' || s[a - 1] == ';' || s[a - 1] == '!'
		     || s[a - 1] == '?' || s[a - 1] == '"' || s[a - 1] == '('
		     || s[a - 1] == ')' || s[a - 1] == '{' || s[a - 1] == '}'
		     || s[a - 1] == '.') && (s[a] > 'a' && s[a] < 'z'))
		{
			s[a] = s[a] - ' ';
		}
	}
	return (s);
}
