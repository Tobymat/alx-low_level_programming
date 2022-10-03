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
	char i;

	while (i < s && s != '\0')
	{
		s[i] = c;
		return(c);
	}
	i++;
	return(NULL);
}
