#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *_isupper - function to check for uppercase character
 * @c: print alphabet
 * Return: Always 0
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		return (1);
	} else if (c >= 'a' && <= 'z')
	{
		_putchar(c);
		return (0);
	}
}
