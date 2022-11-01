#include "main.h"
#include <stdio.h>

/**
  * *_strchr - locates a character in a string
  * @s: string to search
  * @c: char to find
  * Return: a pointer to the first occurence of the character
  */
char *_strchr(char *s, char c)
{
	int k;

	while (1)
	{
		k = *s++;
		if (k == c)
		{
			return (s - 1);
		}
		if (k == 0)
		{
			return (NULL);
		}

	}
}



