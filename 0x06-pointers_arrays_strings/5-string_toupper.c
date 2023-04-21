#include "main.h"

/**
 * string_toupper -program entry point
 *@n : param
 * Return: n
 */

char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 97 && n[i] <= 122)
{
n[i] = n[i] - 32;
}
}
return (n);
}
