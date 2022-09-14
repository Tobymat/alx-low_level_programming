#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of integer
 * @n: integer to get absolute value
 * Return: 0 if false and 1 if otherwise
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
