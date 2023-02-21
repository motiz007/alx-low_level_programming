#include "main.h"
/**
 * print_last_digit- prints the last digit of a number
 * @num: the number it recieves
 * Return: lastd, the last number
 */
int print_last_digit(int num)
{
	int lastd;

	lastd = num % 10;
	if (lastd < 0)
	{
		lastd *= -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
