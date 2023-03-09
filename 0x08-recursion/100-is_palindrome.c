#include "main.h"

int str_len(char *s);
int pal_check(char *s, int len, int i);

/**
 * is_palindrome- checks whether a string is a palindrome
 * @s: the string it recieves
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = (str_len(s));
	int i = 0;

	if (len == 0)
		return (1);
	return (pal_check(s, len, i));
}

/**
 * str_len- checks the length of a string
 * @s: the string it recieves
 * Return: the length of the string
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + (str_len(s + 1)));
}

/**
 * pal_check- checks for palindrome
 * @s: the string it recieves
 * @len: the length of the string
 * @i: the index of the chars
 * Return: 1 if palindrome, 0 if not
 */
int pal_check(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] != s[len - i - 1])
		return (0);
	return (pal_check(s, len, i + 1));
}
