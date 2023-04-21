#include "main.h"
/**
 * print_alphabet_x10- prints alphabet 10 times
 *
 * void: returns nothing
 *
 */

void print_alphabet_x10(void)
{
	char n;
	int m;

	for (m = 1; m <= 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
