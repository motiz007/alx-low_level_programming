#include <stdio.h>
/**
 * main- prints hexadecimal numbers
 * Return: 0 (success)
 */
int main(void)
{
	int hexa;
	char hex;

	while (hexa <= 9)
	{
		putchar('0' + hexa);
		hexa++;
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
