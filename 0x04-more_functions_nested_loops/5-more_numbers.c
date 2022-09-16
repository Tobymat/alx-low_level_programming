#include "main.h"

/**
 * more_numbers - function to print 10 times the numbers
 * _putchar - prints
 */

void more_numbers(void)
{
	int c, d;

	for (c = '0'; c <= '10'; c++)
	{
		for (d = '0'; d < '15'; d++)
		{
			if (d >= 10)
			_putchar('1');
			_putchar(d % 10 + '0');
		}
			_putchar('\n')
	}
}
