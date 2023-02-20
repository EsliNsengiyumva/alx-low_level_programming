#include <stdio.h>

/**
 *
 * Print numbers of base 16
 *
 */

int main(void)
{
	char j;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
