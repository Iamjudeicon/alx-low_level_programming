#include "main.h"

/**
  * *_strcpy - See description
  * @dest: char type string
  * @src: char type string
  * Description: Copy the string pointed to by pointer 'src' to
  * the buffer pointed to by 'dest'
  * Return: Pointer to 'dest'
  */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
