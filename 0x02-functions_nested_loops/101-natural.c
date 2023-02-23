#include <stdio.h>
/**
  *main: sum of all the multiples of 3 or 5
  *101-natural.c: the sum of numbers
  *@ 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
