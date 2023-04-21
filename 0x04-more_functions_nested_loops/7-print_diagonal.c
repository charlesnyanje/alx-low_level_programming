#include "main.h"

/**
 * print_diagonal - entry point
 *@n: function parameter
 * Return: void .
 */
void print_diagonal(int n)
{
int count, i;
count = 0;
if (n > 0)
{
while (count < n)
{
count++;
i = count;
while (i > 1)
{
putchar(' ');
i--;
}
putchar('\\');
putchar('\n');
}
}
else if (n <= 0)
{
putchar('\n');
}
}
