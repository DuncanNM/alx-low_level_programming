#include "main.h"
/**
  * _strcmp - Compares two strings
  * @strA: The first string
  * @strB: The second string
  *
  * Return: int value
  */
int _strcmp(char *strA, char *strB)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (strA[a])
	{
		a++;
	}

	while (strB[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (strA[c] == strB[c])
		{
			c++;
			continue;
		}
		else
		{
			r = strA[c] - strB[c];
			break;
		}

		c++;
	}

	return (r);
}
