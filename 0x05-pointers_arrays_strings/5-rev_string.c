#include "main.h"
/**
 * rev_string- prints a string in reverse
 * @s: the string it recieves
 * Return: void
 */
void re_string(char *s)
{
	int i = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
