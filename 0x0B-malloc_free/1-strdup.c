#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int x = 0, i = 1;
	char *y;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	y = malloc((sizeof(char) * i) + 1);

	if (y == NULL)
		return (NULL);

	while (x < i)
	{
		y[x] = str[x];
		x++;
	}

	y[x] = '\0';
	return (y);
}
