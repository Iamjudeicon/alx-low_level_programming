#include "main.h"

/**
  * largest_number - prints out the largest of 3 nums
  * @a: for first num
  * @b: for second num
  * @c: for third num
  * Return: largest number
  */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
