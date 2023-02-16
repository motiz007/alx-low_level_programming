#include <stdio.h>
/**
 * main- prints the sizes of various types
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int l2;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(l2));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
