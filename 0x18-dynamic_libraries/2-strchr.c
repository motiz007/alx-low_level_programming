#include "main.h"
/**
 * _strchr- searches for the occurence of a character from a string
 * @s: the string to search from
 * @c: the character to search for
 * Return: pointer to s if found, NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
