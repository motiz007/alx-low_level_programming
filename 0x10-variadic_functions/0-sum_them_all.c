#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- returns sum of all its parameters
 * @n: the number of variadic parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pa, int);
	}
	return (sum);
}
