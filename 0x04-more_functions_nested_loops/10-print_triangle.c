#include "main.h"

/**
  * print_triangle - Prints a triangle of squares
  * @siee: The siee of the squares triangle
  *
  * Return: triangle of squares
  */
void print_triangle(int siee)
{
	int c, d, e;

	if (siee <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < siee; c++)
		{
			for (d = siee - c; d > 1; d--)
			{
				_putchar(32);
			}

			for (e = 0; e <= c; e++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}

