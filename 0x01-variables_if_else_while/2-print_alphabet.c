#include <stdio.h>

/**
 * main - entry point
 *
 * putchar - prints 'lowercase alphabets'
 *
 * Return: 0 if false and 1 if true
 *
 */

int main(void)
{
	char ha;


	for (ha = 'a'; ha <= 'z'; ha++)
	{
		putchar(ha);
	}
	putchar('\n');
	return (0);
}
