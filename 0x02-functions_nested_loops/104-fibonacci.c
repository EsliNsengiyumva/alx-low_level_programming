#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: Zero.
  */
int main(void)
{
	int count;
	unsigned long h, i, j;
	unsigned long m, n, t, carry;

	count = 0;
	i = 0;
	j = 1;
	for (count = 1; count <= 91; count++)
	{
		h = i + j;
		i = j;
		j = h;
		printf("%lu, ", h);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		t = (m + n) - carry * 1000;
		h = (i + j) + carry;
		m = n;
		n = t;
		i = j;
		j = h;
		if (t >= 100)
			printf("%lu%lu", h, t);
		else
			printf("%lu0%lu", h, t);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
