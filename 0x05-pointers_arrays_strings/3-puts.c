#include "main.h"
#include <string.h>

/**
 * _puts - entry point into the function
 * @str: function parameter
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
