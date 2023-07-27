#include "main.h"
/**
 * cap_string - prints 1st letters as upper
 * Description: Takes a pointer str and conversts first letter to upper
 * @q: takes string pointers
 *
 * Return: char
 */

char *cap_string(char *q)
{
int i;

while (q[i] != '\0')
{
if (q[i] >= 'A' && q[i] <= 'Z')
	q[i];
if (q[i - 1] == ' ' || q[i - 1] == '\n' || q[i - 1] == '\t' || q[i - 1] == '.')
{
while (q[i] >= 'a' && q[i] <= 'z')
q[i] = q[i] - 32;
}
i++;
}

return (q);
}
