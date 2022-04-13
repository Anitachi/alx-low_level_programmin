#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: is always 0
 */

void times_table(void)
{
	int p;
	int i;

	for (p = 0; i <= 9; p++)
	{

		for (i = 0; i <= 9; i++)
		{
			int prod = i * p;

			if (i == 0)
			{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');

			}
		}
		_putchar('\n');
	}
}
