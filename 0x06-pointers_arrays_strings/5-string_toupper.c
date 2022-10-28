#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @word: string to modify
  * Return: the resulting string
  */

char *string_toupper(char *word)
{
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] > 96 && word[i] < 123)
			word[i] -= 32;
	}
	return (word);
}

