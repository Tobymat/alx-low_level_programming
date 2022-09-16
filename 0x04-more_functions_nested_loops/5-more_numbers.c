#include "main.h"

/**
 * more_numbers - function to print 10 times the numbers
 * _putchar - prints
 * Return: No return
 */

void more_numbers(void)
{

	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			_putchar('1');
			_putchar(b % 10 + '0');
		}
			_putchar('\n');
		}
}
