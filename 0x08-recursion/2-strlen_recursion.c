#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Entry point
 * @s: character to check
 * Description: a function that returns lenght of a string
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
