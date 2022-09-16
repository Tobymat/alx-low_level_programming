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

	c = 'A';
	_putchar("%c: %d\n", c, _isupper(c));
	return (1);
	c = 'a';
	_putchar("%c: %d\n", c, _isupper(c));
	return (0);
}
