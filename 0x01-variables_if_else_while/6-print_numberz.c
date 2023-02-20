#include <stdio.h>

/**
 
 *
 * Use puchar to print numbers from 0 to 9
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
