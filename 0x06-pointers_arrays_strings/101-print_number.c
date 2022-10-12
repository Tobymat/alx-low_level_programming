#include "main.h"
#include <stdio.h>

/**
 * print_number - entry point
 * @n: integer counter
 * Description: a function that prints an integer
 * Return: Always (0)
 */

void print_number(int n)
{
	for (n = 0; n != '\0'; n++)
	{
		if (!(n = 'a' && <= 'z'))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
