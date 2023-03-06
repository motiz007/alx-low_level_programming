#include "main.h"
/**
 * _strspn- checks length of initial substring that contains
 *          only certain characters.
 * @s: the string to check
 * @accept: the chars to check for
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
