#include "main.h"

/**
 * print_square - program entry point
 *@size: function parameter
 * Return: Always 0.
 */
void print_square(int size)
{
int count1, count2;
count1 = 0;

if (size > 0)
{
while (count1 < size)
{
count2 = 0;
while (count2 < size)
{
putchar('#');
count2++;
}
putchar('\n');
count1++;
}
}
else
{
putchar('\n');
}
}
