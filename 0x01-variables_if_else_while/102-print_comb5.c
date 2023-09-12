#include <stdio.h>
/**
 * main - Program point of entry
 * Return: Always return 0 (success)
 */
int main(void)
{
	int firstDigit = '00';
	int secondDigit = '00';

	while (firstDigit <= 99)
	{
	while (secondDigit <= 99)
	{
		if (firstDigit != 00 || secondDigit != 01)
		{
				putchar((firstDigit / 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
			if (firstDigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
