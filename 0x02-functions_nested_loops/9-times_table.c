#include "main.h"
/**
 * times_table- prints out multiplication table to 9
 * Return: the multiplication table
 */
int times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (j == 0)
			{
				putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(k + '0');
			}
			else if (k >= 10)
			{
				putchar(',');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
			}
		}
		putchar('\n');
	}
}
