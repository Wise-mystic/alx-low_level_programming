#include "mai.h"
/**
 * _strlen_recursion - A function that returns the length of a sting
 * @s: the string to be measured
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int longit - 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
