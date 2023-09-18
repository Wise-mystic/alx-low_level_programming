#include "main.h"

/**
 * _strlen - a functions that returns the lenght of a string
 * @s: strings
 * Return: Lenght
 */

int _strlen(char *s)

{
	int longi = 0;

	while (*s != '\0')
	{
	longi++;
	s++;
	}

	return (longi);
}
