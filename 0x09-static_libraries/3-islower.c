#include "main.h"
/**
 * _islower- checks is a letter is lower case
 * @c: integer value it recieves
 * Return: 1 if true. 0 if false
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
