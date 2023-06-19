#include "main.h"
/**
 * _strstr- search for the first occurrence of a substring from another string
 * @haystack: the string to search from
 * @needle: the string to search for
 * Return: haystack if found, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
