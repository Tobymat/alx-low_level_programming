#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * if & else-if - checks true and false
 *
 * Return: 0 if false and 1 if true
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n == n-1)
		{
			printf("%d Last digit of\n",n);
		} else if (n == n)
		{
			printf("%d n\n");
		} else if (n-1 > 5)
		{
			printf("the string %d and is greater than 5\n");
		} else if (n-1 == 0)
		{
			printf("the string %d and is 0\n");
		} else if (n-1 < 6 && n-1 != 0)
		{
			printf("the string %d and is less than 6 and not 0\n");
		}
		return (0);
}
