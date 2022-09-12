#include <stdio.h>
/**
 * main - entry point
 * putchar - prints 'lowercase alphabets without e & q'
 * Return: 0 if false and 1 if true
 */

int main(void)
{
	char sh;

	for (sh = 'a'; sh <= 'z'; sh++)
	{
		if (sh != 'e' && sh != 'q')
		{
			putchar(sh);
		}
		putchar('\n');
		return (0);
	}
}

	
