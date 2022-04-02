#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, j = 0;

	while (dest[length])
	{
		length++;
	}

	while (j < n && src[j])
	{
		dest[length] = src[j];
		length++;
		j++;
	}

	dest[length + n + 1] = '\0';

	return (dest);
}

