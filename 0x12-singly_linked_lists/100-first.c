#include <stdio.h>
#include "lists.h"

void print_before_main(void)__attribute__((constructor));

/**
 * print_before_main- this function
 * prints things before main
 * Return: void
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
