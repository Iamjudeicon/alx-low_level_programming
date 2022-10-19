#include <main.h>
/**
  * print_alphabet - (entry point) prints alphabet in lower case
  * Return: Success (0)
  */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
i
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
