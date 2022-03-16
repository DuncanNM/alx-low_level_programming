#include "main.h"
/**
 * main - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int number1, number2, answer;

	for (number1 = 0; number1 <= 9; number1++)
	{
		_putchar('0');

		for (number2 = 1; number2 <= 9; number2++)
		{
			_putchar(',');
			_putchar(' ');

			answer = number1 * number2;

			if (answer <= 9)
				_putchar(' ');
			else
				_putchar((answer / 10) + '0');

			_putchar((answer % 10) + '0');
		}
		_putchar('\n');
	}
}
