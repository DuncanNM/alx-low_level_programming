#include "main.h"
char *_strcpy(char *dest, char *src)
{
	int length = 0, j = 0;
	int n = 10;

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
