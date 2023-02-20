#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 *This program helps to print after checking if a number is positive, negative or zero
 * Return: Zero value
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(" Number is positive:%d\n", n);
	}
	else if (n < 0)
	{
		printf(" Number is negative:%d\n", n);
	}
	else
	{
		printf(" The result is zero:%d\n", n);
	}
	return (0);
}
