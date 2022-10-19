#include <stdio.h>
/**
  * main - (entry point) prints alphabet in lower case
  * Return: Success (0)
  */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
