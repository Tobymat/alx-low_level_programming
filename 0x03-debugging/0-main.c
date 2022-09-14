#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * int - variable declaration and intialization
 *
 * Return: 0 if negative and 1 if otherwise
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n"' n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
