#include "main.h"

/**
 * _strlen - Finds the length of  string.
 * @s; String pointer to the string whose length is to be found.
 * Return: returns the lenght of the string.
 */

int _strlen(char *s)
{
	int p = 0;
	/*increment up to when the last character is NULL,\0*/
	while (*(s + p) ! = 0)
	{
		p++
	}
	return (p);
}
