#include "main.h"
/**
 * print_times_table- prints the n times table
 * @n: the number it recieves
 * Return: void
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, product, divisor;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (product < 0)
				{
					_putchar('-');
					product = -product;
				}
				divisor = 1;
				while (divisor <= product / 10)
				{
					divisor *= 10;
				}
				while (divisor > 0)
				{
					_putchar('0' + (product / divisor));
					product %= divisor;
					divisor /= 10;
				}
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
