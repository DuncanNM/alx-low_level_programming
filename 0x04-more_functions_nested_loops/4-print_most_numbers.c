#include "main.h"

/**
  * print_most_numbers - Print 0-9 eccluding 2 and 4
  *
  * Return: 0-9 eccluding 2 and 4
  */
void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}

	_putchar('\n');
}
