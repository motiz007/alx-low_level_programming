#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main- generates random number
 * and checks whether the number is positive, negative or equal to 0
 * * Return: void (success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
