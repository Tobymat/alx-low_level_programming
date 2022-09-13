#include <stdio.h>

/**
 * main - entry point
 * putchar - prints lowercase alphabets in reverse
 * Return: 0 if false and 1 if otherwise
 */

int main(void)
{
	char sh;

	for (sh = 'a'; sh <= 'z'; sh--)
	{
		putchar(sh);
	}
	putchar('\n');
	return (0);
}
