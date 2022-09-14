#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *
 * Return: 0 if false and 1 if otherwise
 *
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
