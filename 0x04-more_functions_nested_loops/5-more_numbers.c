#include "main.h"
/**
 * more_numbers - print the numbers 0 to 14 for 10 times
 * Return: is 0
 */

void more_numbers(void)
{
	int c;

	for (c >= 0; c <= 14; c++)
	{
		for (c = 0;  c < 10; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
