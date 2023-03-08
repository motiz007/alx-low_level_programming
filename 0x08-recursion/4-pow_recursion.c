#include "main.h"
/**
 * _pow_recursion- calculates the power of a number
 * @x: the number to power
 * @y: the number to power by
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
