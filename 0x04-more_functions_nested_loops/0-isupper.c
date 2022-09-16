#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *_isupper - function to check for uppercase character
 * @c: print alphabet
 * Return: Always 0
 */

int main(void)
{
	char c;

	c = 'A';
	_putchar(_isupper(c));
	c = 'a';
	_putchar(_isupper(c));
	return (0);
}
