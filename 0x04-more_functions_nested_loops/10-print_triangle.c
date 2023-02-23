#include "main.h"
/**
 * print_triangle- prints a triangle with # according to input
 * @size: the input it recievies
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
