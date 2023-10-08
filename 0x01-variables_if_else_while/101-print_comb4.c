#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int digit1, digit2, digit3;
	int printed = 0;

	for (digit1 = 0 ; digit1 < 8 ; digit1++)
	{
		for (digit2 = digit1 ; digit2 < 9 ; digit2++)
		{
			for (digit3 = digit2 + 1 ; digit3 < 10 ; digit3++)
			{
				if (printed > 0)
				{

					putchar(',');
					putchar(' ');
				}

				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				printed++;

			}
		}

	}
		putchar('\n');

		return (0);
}
