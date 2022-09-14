#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: number to be print
 * Return: 0 if false and 1 if otherwise
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
		i = -i;

	n = i % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (n);
}
