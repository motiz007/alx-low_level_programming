#include "main.h"
#include <stdio.h>
/**
 * print_to_98- prints from n to 98
 * @n: the number it recieves and counts from
 * Return: the numbers to 98
 */
void print_to_98(int n)
{
	int diff;
	int i;

	diff = n - 98;
	if (diff > 0)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		putchar('\n');
	}
	else if (diff < 0)
	{
		for (i = n; i >= 98; i++)
		{
			printf("%d, ", i);
		}
		putchar('\n');
	}
	else
	{
		printf("%d\n", n);
	}
}

