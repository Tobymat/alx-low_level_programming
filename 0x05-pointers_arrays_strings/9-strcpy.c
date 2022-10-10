#include "main.h"

/**
 * *_strcpy - function that copies string
 * @dest: character to check
 * @src: character to check
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
