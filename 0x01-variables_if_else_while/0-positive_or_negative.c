#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * int - variable declaration and intialization
 *
 * Return: 0 if negative and 1 if otherwise
 */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if(n >= 0 && n <= 0)
		return (0);
}
