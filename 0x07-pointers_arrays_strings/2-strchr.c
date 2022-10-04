#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character
 * @s: first character
 * @c: second character
 *
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return(s);
		}
		s++;
	}

	if (!c)
	{
		return(s);
	}
	return(NULL);
}
