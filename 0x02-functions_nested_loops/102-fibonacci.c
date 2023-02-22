#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- prints first 50 fibo numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	while (i <= 50)
	{
		for (j = 1; j <= 12586269025; j = j + j)
		{
			j += j;
			printf("%d, ", j);
		}
		i++;
	}
}
