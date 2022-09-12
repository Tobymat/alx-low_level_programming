#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 */

int main(void)
{
	char ha;
	
	for (ha = "a"; ha <= "z"; ha++)
	{
		putchar(ha);
	}
	putchar("\n");
	return (0);
}
