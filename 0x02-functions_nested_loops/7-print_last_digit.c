#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: The number whose last digit is wanted
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
