#include "main.h"

/**
 * sqrt2 - program entry point
 * @a: param
 * @b: param
 *
 * Return: 1 (success) -1 (error)
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns square of n
 * @n: param
 *
 * Return: 1 (success) -1 (error)
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
