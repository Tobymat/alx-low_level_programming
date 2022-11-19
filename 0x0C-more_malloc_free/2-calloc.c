#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: address of memory to print
 * @size: the size of memory to print
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *st;

	if (nmemb == 0 || size == 0)
		return (NULL);
	st = malloc(nmemb * size);
	if (st == NULL)
		return (NULL);
	_memset(st, 0, nmemb * size);
	return (st);
}
/**
 * _memset - function that  fills memory with a constant byte
 * @s: memory area to fill
 * @j: constant byte
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char j, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = j;
		i += 1;
	}
	return (s);
}
