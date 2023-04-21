#include "main.h"

/**
 * print_line - entry point into the program
 *@n: function parameter
 * Return: void .
 */
void print_line(int n)
{
int count;
count = 0;
if (n <= 0)
{
putchar('\n');
}
else
{
for (count = 0; count < n; count++)
{
putchar('_');
}
putchar('\n');
}
}
