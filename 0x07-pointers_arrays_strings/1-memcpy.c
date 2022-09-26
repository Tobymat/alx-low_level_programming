#include "main.h"

/**
 * _memcpy - function to copy memory
 * @dest: first character
 * @src: second character
 * @n: number of times to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = *dest;
		*dest = *src;
		*src = tmp;
	}
	return (dest);
}
