#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of numbers
 * @n: number to be checked
 * Return: 0 if false and 1 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
