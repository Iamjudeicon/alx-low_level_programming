#include "main.h"

/**
  * _strncat - concatenate two strings base on size
  * @dest: pointer arg 1
  * @src: pointer arg 2
  * @n: size
  * Return: concatenated strings
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
