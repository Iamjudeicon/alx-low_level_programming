#include <stdio.h>

/**
  * main - print the size of each data type
  * Return: an int value 0 if successful else non-zero
  */

int main(void)
{
	printf("The size of char: %d byte(s)\n",sizeof(char));
	printf("The size of int: %d byte(s)\n" ,sizeof(int));
	printf("The size of long int: %d byte(s)\n",sizeof(long int));
	printf("Size of long long int: %d byte(s)\n",sizeof(long long int));
	printf("The size of float %d byte(s)\n",sizeof(float));
	return (0);
}
