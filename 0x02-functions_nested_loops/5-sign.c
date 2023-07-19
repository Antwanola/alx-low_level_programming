 #include "main.h"
/**
 *print_sign -  return signs of numbers
 *Description: this helps know what type of number ..
 *@n: takes in an integer 
 *Return: returns an integer
 */

int print_sign(int n)
{
	if (n < 0 )
	{
		return (-);
	}
	else if (n > 0)
	{
		return (+);
	}
	else
		return (0);
}
