#include <stdio.h>
/*
 * main - prints alphabet 10 times in lower case
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char letter;
	int counter = 0
	
	while (counter++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
