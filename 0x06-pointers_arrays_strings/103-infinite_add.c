#include "main.h"
#include <stdio.h>
/**
* infinite_add - a function that adds two numbers
* @n1: a char pointer given by main that represents a num
* @n2: a char pointer given by main that represents a num
* @r: a buffer given by main
* @size: the buffer size given by main
*/
char *infinite_add(char *n1, char *n2, char *r, int size)
{
	int i = 0, j = 0, k = 0;
	int sum = 0;
	int tens = 0;
	int start = 0;
	int swap = 0;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;
	i--;
	j--;
	if (i > size || j > size)
		return (0);
	for ( ; k < size; i--, j--, k++)
	{
		sum = tens;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (i < 0 && j < 0 && sum == 0)
			break;
		tens = sum / 10;
		r[k] = sum % 10 + '0';
	}
	if (i >= 0 || j >= 0 || sum > 0)
		return (0);
	r[k] = '\0';
	k--;
	for ( ; start < k; k--, start++)
	{
		swap = r[k];
		r[k] = r[start];
		r[start] = swap;
	}
	return (r);
}
