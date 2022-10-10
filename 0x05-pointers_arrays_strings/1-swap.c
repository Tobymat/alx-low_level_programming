#include "main.h"

/**
 * swap_int - function to swap two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
