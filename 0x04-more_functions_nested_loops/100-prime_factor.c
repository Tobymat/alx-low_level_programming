#include <stdio.h>
#include <math.h>

/**
 * maxPrimeFactors - function to check for largest prime number
 * maxPrime - lowest variable
 * @n: integer to check
 * Return: 0 if false or 1 if otherwise
 */

int maxPrimeFactors(int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n/2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n/i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	return max;
}
