#include "main.h"

int sqrt_num(int *n, *s);

/**
 * _sqrt_recursion- finds the sqrt of a number
 * @n: the number it recieves
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int s = 0;

	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (sqrt_num(n, s));
}

/**
 * sqrt_num- checks is a number is the sqrt of other number
 * @n: the number to be the result
 * @s: the number to multiply
 * Return: the sqrt number
 */
int sqrt_num(int *n, int *s)
{
	if ((s * s) == n)
		return (s);
	else if ((s * S) > n)
		return (-1);
	return (sqrt_num(n, s - 1));
}
