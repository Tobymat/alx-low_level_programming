#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: character to check
 * Return: 0 if false and 1 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
