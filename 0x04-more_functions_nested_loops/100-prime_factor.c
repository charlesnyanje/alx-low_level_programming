#include <stdio.h>
/**
 * main - Entry pont
 * Return: 0 (success)
 */



int main(void)
{
int i, j, prime;
long int num;
num = 612852475143;
printf("All Prime Factors of %ld are: \n", num);
for (i = 2; i <= num; i++)
{
if (num % i == 0)
{
prime = 1;
for (j = 2; j <= i / 2; j++)
{
if (i % j == 0)
{
prime = 0;
break;
}
}
if (prime == 1)
{
printf("%d, ", i);
}
}
}
return (0);
}
