#include <stdio.h>
/**
 * main - Aprogram that prints all possible various combinations of two digits
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; <= '9'; ones++)

		{
			if (!((ones == tens || (tens > ones)))
				{
			putchar(tens);
			putchar(ones);
			if (!(ones == '9' && tens == '8'))
			{
				putchar(',');
				putchar(' ');
				}
				}
				}
				}

			putchar('\n');
			return (0);
}
