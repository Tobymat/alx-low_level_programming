#include "main.h"
#include <stdio.h>

/**
 * set_string - entry point
 * @s: pointer of a character
 * @to: second pointer
 * Description: a function that sets the value of a pointer
 * Return: Always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
