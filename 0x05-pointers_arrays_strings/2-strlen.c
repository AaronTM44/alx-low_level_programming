#include "main.h"

/**
 * _strlen - returns length of  a string
 * @s: string
 * Return: lenght of s
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
