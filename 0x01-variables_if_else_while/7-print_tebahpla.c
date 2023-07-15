#include <stdio.h>
/**
 * main - entry function
 * Description: using just putchar to print all the alphabets in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}

