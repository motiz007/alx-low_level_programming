#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings- prints strings with seperator between
 * @separator: the char to seperate the integers
 * @n: the number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *str;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(pa);
	printf("\n");
}
