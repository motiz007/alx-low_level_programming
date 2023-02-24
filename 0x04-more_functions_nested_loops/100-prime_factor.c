#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "main.h"
/**
 * main- prints larget prime factor of 612852475143
 * Return: 0 (success)
 */
int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
