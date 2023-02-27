#include "main.h"
/**
 * _strlen- counts the size of a string
 * @s: the input it recieves
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
