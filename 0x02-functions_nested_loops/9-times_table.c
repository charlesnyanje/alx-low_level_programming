#include "main.h"
/**
 * times_table- print_alphabet
 * Return: void/null
 */
void times_table(void)
{
int a, b, result;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
result = a * b;
if (b == 0)
{
_putchar(result + '0');
}
else if (result >= 10)
{
_putchar(' ');
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
if (b != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
