#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: inputted variables
 * Description: a program that prints number of arguments
 * Return: Number of argc
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
