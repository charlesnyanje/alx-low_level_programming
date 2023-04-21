#include "main.h"
/**
 * print_diagsums - program entry point
 *@a: param
 *@size: param
 */
void print_diagsums(int *a, int size)
{
	int b, c, sum_1 = 0, sum_2 = 0, d, g = 0;

	d = size - 1;
	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			if (b == c)
				sum_1 += a[g];
			if (j == k)
				sum_2 += a[g];
			g++;
		}
		d--;
	}
	printf("%b, %i\n", sum_1, sum_2);
}
