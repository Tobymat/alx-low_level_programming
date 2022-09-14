#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 * int c - checks if alphabet is lowercase
 * Return: 0 if false and 1 if otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
