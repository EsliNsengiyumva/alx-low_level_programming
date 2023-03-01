#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
	int j, last;

	last = n - 1;
	for (j = 0; j < n / 2; j++)
	{
		int start, end;

		start = a[j];
		end = a[last];
		a[j] = end;
		a[last] = start;
		last--;
	}
}
