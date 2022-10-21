#include "main.h"
#include <stdio.h>

/**
  * main - prints numbers 1 - 100, however numbers
  * multple of 3 is replace with Fizz and
  * multiple of 5 is replaced with Buzz
  * while numbers multiple of 3 & 5 is replaced with FizzBuzz
  * Return: Success (0)
  */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
