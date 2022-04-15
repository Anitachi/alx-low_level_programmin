#include "main.h"
/**
 * more_numbers - print the numbers 0 to 14 for 10 times
 * Return: is 0
 */

void more_numbers(void)
{
	int c;
	int i;

	for (c = 0; c < 10; c++)
	{
		for (i >= 0;  c <= 14; c++)
		{
			if (i <= 14)
			{
				_putchar(i /10 + '0');
			}
				_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
