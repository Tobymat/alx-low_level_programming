#include "main.h"

/**
 * puts2 - function that prints
 * @str: character to be checked
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
