#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @n: The number whose absolute value is wanted
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;

		return (abs_val);
	}

	return (n);
}
