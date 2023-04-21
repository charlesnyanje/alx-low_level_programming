#include "main.h"

/**
 * swap_int - entry point into the program
 * @a: function parameter
 * @b: function parameter
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
