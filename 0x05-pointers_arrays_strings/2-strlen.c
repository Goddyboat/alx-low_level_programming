#include "main.h"

/**
 * _strlen - Finds the length of  string.
 * @s; String
 * Return: length
 */

int _strlen(char s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
