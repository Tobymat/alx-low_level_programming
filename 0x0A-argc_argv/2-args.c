#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Description: a program that prints all arguments
 * Return: All arguments
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; argv[i]; i++)
	{
		for (j = 0; j + 1 < i; j++)
		{
			printf("%s\n", argv - 1);
		}
	}
	return (0);
}
