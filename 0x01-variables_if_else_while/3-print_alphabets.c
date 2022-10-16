#include <stdio.h>

/**
  * main - (entry point) prints lowercase & uppercase alp
  * Return: success (0)
  */

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
