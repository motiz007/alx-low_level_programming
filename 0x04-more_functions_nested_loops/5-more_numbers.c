#include "main"
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
			_putchar('0' + j);
		}
		_putchar('\n');
		i++;
	}
}
