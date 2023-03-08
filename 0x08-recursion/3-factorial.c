#include "main.h"
/**
 * factorial- calculates the factorial of a number
 * @n: the number it recieves
 * Return: the value of the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
