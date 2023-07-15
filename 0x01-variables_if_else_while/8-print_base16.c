#include <stdio.h>
/**
 * main - entry function
 * Description: using just putchar to print base 16 nums
 * Return: 0 (success)
 */
int main(void)
{
	char letter;
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}

