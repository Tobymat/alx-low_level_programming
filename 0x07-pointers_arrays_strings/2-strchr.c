#include "main.h"

/**
 * _strchr - function that locates a character
 * @s: first character
 * @c: second character
 *
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	if (c == *s)
		return(c);
	else
		return(NULL);
}
