#include <stdio.h>

/**
  * main - (entry point) prints the alphabet excluding q & e
  * Return: success (0)
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);

}
