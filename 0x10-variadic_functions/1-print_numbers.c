#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers- prints numbers with seperator between
 * @separator: the char to seperate the integers
 * @n: the number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pa, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(pa);
	printf("\n");
}
