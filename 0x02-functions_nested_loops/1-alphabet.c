#include "main.h"

/**
 * print_alphabet - Not the usual main entry
 *
 * Description: Just printing _puctchar
 *
 * Return: 0 as usual
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha)
}
_putchar('\n');
return (0);
}
