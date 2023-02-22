#include "main.h"
/**
 * print_times_table- prints the n times table
 * @n: the number it recieves
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int mult;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mult = i * j;
			if (mult < 10)
			{
				_putchar(mult + '0');
				_putchar(',');
				_putchar(' ');
				}
			else if (mult >= 10)
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (mult >= 100)
			{
				int num2 = mult / 10;
				int middle = num2 % 10;
				int first = num2 / 10;

				_putchar(first + '0');
				_putchar(middle + '0');
				_putchar(mult % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		}
}
