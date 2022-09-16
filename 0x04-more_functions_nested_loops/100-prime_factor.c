#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * maxPrimeFactors - function to check for largest prime number
 * maxPrime - lowest variable
 * @n: integer to check
 * Return: 0 if false or 1 if otherwise
 */

long long maxPrimeFactors(long long n)
{
	/* Intialize the maximum prime factor 
	 * variable with the lowest one
	 */
	long long maxPrime = -1;

	/* print the number 2s that can divide n */
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	/* n must be odd at this point */
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n /= 3;
	}
	/* now we need to iterate for integers
	 * who does not have prime factor 2 and 3
	 */
	for (int i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n /= (i + 2);
		}
	}
	/* This condition is handle the case when n is a prime
	 * number greate than 4
	 */
	if (n > 4)
		maxPrime = n;

	return maxPrime;
}
