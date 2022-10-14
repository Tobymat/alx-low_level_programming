#include "main.h"
#include <stdio.h>

/**
 * prime_numbers - entry point
 * @i: first integer
 * @j: second integer
 * Description: a function that gets the prime numbers
 * Return: boolean val of the inputs
 */

int prime_numbers(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (prime_numbers(i, j - 1));
}

/**
 * is_prime_number - entry point
 * @n: interger input
 * Description: returns 1 if the input integer is a prime number
 * Return: the input value
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (prime_numbers(n, n - 1));
}
