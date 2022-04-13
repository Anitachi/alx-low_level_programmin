#include "main.h"
/**
 * jack_bauer - print every minute of the day
 * Return: is always 0
 */

void jack_bauer(void)
{
	int c;
	int a;

	for  (c = 0; c <= 23; c++)
	{
		for (a = 0, a <= 59; a++)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(':');
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar('\n');
		}
	}
}
