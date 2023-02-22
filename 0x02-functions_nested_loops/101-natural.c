#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int sum;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;

		}
	i++;
	}
	printf("%d\n", sum);
	return (0);
}
