#include "main.h"

/**
 * print_triangle - entry point into the program
 *@size: function parameter
 * Return: Always 0.
 */
void print_triangle(int size)
{
int count, i;
count = 0;
if (size > 0)
{
while (count < size)
{
i = size;
while (i > count + 1)
{
i--;
putchar(' ');
}
while (i > 0)
{
putchar('#');
i--;
}
count++;
putchar('\n');
}
}
else
{
putchar('\n');
}
}
