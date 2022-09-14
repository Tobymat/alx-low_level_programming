#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 * @c: the character to check
 * Return: 0 if false and 1 if otherwise
 */

int _islower(int c)   /**c checks if alphabet is lowercase*/
{
	return (c >= 'a' && c <= 'z');
}
