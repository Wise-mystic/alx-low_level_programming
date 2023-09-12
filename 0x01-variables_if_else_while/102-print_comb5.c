#include <stdio.h>
/**
 * main - Program point of entry
 * Return: Always return 0 (success)
 */
int main(void)
{
	int firstDigit; 
	int secondDigit;

	while (firstDigit <= 99)
	{
		secondDigit != firstDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstDigit)
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
	}
		putchar('\n');
		return (0);
}
