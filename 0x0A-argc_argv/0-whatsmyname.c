#include "main.h"
#include <stdio.h>

void print_string(char *str)

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Description: a program that prints its name
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print_string(argv[0]);
	putchar('\n');

	return (0);
}

/**
 * print_string - prints all characters of a string
 * Description: function to print a string
 * @str: pointer to a string
 * Return: Nothing
 */

void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
