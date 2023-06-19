#include "main.h"
/**
 * _strpbrk- searches for the first occurence of a particular char
 *           that is contained in a string
 * @s: the string to be searched
 * @accept: the combination of chars to search from
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j = 0;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
