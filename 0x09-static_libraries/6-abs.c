#include "main.h"
/**
 *  _abs- computes absolute value of an integer
 *  @num: the number it recieves to be converted
 *  Return: pnum absolute value of the input
 */
int _abs(int num)
{

	if (num < 0)
	{
		num = num * -1;
	}
	else
	{
		num = num;
	}
	return (num);
}
