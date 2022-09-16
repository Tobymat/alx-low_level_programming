#include "main.h"

/**
 * _isupper - function that checks for uppercase alphabet
 *
 * @c: character to check
 *
 * Return: 1 always and 0 if otherwise
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(1);
	else
		return(0);
}
