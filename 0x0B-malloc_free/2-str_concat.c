#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: ps
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	int lent = 0;
	char *ps;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	lent = len1 + len2 + 1;
	ps = malloc(lent * (sizeof(char)));
	if (ps == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ps[i] = s1[i];
	j = 0;
	for (i = len1; i < lent; i++)
	{
		ps[i] = s2[j];
		j++;
	}
	ps[i] = '\0';
	return (ps);
	free(ps);
}
