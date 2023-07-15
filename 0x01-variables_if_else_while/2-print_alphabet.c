#include <stdio.h>
/**
 * main - entry function
 * Description: using just putchar to print all the alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}

