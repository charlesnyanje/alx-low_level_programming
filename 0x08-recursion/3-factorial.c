#include "main.h"

/**
 * factorial - program entry point
 * @n: function param
 *
 * Return: 1 (success) -1(error)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

