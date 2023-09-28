#include "main.h"
/**
 * _puts_recursion - A function that likes puts();
 * @s: Input
 * Return: Always return 0 (successful)
 */

void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion;
	}
	else
		_putchar('\n');
}
