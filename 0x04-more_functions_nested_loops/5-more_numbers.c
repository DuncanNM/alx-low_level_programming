#include "main.h"

/**
  * more_numbers - Print 0-14 ten times
  *
  * Return: 0-14 ten times
  */
void more_numbers(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar((d / 10) + '0');
			}

			_putchar((d % 10) + '0');
		}

		_putchar('\n');
	}
}
