#include "main.h"
/**
 * print_rev- prints a string in reverse
 * @s: the string it recieves
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (k = len - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
