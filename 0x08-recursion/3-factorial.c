#include "main.h"
#include <stdio.h>

/**
 * factorial - Entry point
 * @n: given integer
 * Description: a function that returns the factorial of a given number
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
