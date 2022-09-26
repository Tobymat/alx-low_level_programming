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

	for (i = 0; i < s; i++)
	{
		if (i == 'c')
		{
			return (s);
		}
		else if (!(i == 'c'))
		{
			return (NULL);
		}
	}

}
