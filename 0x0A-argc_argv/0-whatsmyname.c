#include "main.h"
#include <stdio.h>

void print_name(char *str)

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Description: a program that prints its name
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print_name(argv[0]);
	putchar('\n');

	return (0);
}

/**
 * print_name - prints all characters of a string
 * Description: function to print a string
 * @str: pointer to a string
 * Return: Nothing
 */

void print_name(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
}
