#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:always 0 (success)
 *
 */

int main(void)
{
	int n;
	int k;

	for (n = 0; n < 9; n++)
	{
	for (k = n + 1; k < 10; k++)
	{
		putchar((n % 10) + '0');
		putchar((k % 10) + '0');

		if (n == 8 && k == 9)
		{
			continue;
		}
		 putchar(',');
		 putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
