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
	int i;

	for (i = 0; i < s && s != '\0'; i++)
	{
		if (s[i] = 'c')
			return(s[i]);
		else
			return(NULL);
	}
	return(c);
}
