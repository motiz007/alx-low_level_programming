#include "main.h"
/**
 * puts_half- prints the last half of a string
 * @str: the input it recieves
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int half, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len - 1) / 2;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= half && i <= len)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
