#include "main.h"
/**
 * main - checks if character is a letter
 * 
 * Return: 1 if char is letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c<= 'Z'))
		return (1);
	else
		return (0);
}
