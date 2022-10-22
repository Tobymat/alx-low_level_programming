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
	int i = 0;

	for (i = 1; argv[i] != '\0'; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
