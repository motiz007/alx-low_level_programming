#include "main.h"
/**
 * _strcmp- compares two strings
 * @s1: the first string to compare
 * @s2: the second string ro compare
 * Return: count
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int count = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			count = s1[i] - s2[i];
			break;
		}
		else if (s1[i] < s2[i])
		{
			count = s1[i] - s2[i];
			break;
		}
		else
		{
			count = 0;
		}
	}
	return (count);
}
