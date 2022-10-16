#include <stdio.h>

/**
  * main - (entry point) using putchar to print numbers
  * from base 10, followed by a new line
  * Return: Success (0)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
