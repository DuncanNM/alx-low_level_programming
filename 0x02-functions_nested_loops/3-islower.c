#include "main.h"
/**
 *
 * main - checks for lower case characters
 *
 * Return: 0 if not lowercase and 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
