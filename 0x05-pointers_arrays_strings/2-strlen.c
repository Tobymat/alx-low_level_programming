#include "main.h"

/**
 * _strlen - function that returns the lenght of a string
 * @s: character to check
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
