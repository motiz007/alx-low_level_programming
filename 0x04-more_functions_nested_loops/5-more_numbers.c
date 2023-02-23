#include "main.h"
/**
 * more_numbers- prints 1-14 10times
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
				_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
