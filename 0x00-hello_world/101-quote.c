#include <stdio.h>
#include <unistd.h>

/**
 * main - executes the code within the program
 * write - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * Return: Always returns 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
