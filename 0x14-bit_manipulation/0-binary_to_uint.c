#include "main.h"

/**
* binary_to_uint - converts binary to unsigned int
* @b: the binary number
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;

if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b < '0' || *b > '1')
return (0);
if (*b == '1')
num = num * 2 + 1;
if (*b == '0')
num = num * 2 + 0;
b++;
}
return (num);
}
