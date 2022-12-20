#include "main.h"

/**
 * _strlen - Finds the length of  string.
 * @s; String pointer to the string whose length is to be found.
 * Return: returns the lenght of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
